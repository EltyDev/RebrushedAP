#include "Utils/FName.hpp"
#include "Utils/Memory.hpp"

namespace FNameUtils {

    static std::map<uint64_t, std::string> nameCache;

    static unsigned long tou(char* _dst, const wchar_t* _wstr) {
        if (!_dst) return 0;
        char* bak = _dst; unsigned lowSurrogate, u = 0;

        while ((u = *_wstr++)) {

            if (u < 0x80) *_dst++ = u;
            else if (u < 0x800) {
                *_dst++ = 0xC0 | ((u & 0x7C0) >> 6);
                *_dst++ = 0x80 | (u & 0x3F);
            }
            else if (u < 0xD800) {
            _UTF_3:
                *_dst++ = 0xE0 | ((u & 0xF000) >> 12);
                *_dst++ = 0x80 | ((u & 0xFC0) >> 6);
                *_dst++ = 0x80 | ((u & 0x3F));
            }
            else if (u <= 0xDBFF) {  // HighSurrogate 
                lowSurrogate = (*_wstr++ & 0xFFFF);
                if (lowSurrogate >= 0xDC00 && lowSurrogate <= 0xDFFF) {  // LowSurrogate
                    u = (((u - 0xD800) << 10) | (lowSurrogate - 0xDC00)) | 0x10000;
                    *_dst++ = 0xF0 | ((u & 0x1C0000) >> 18);
                    *_dst++ = 0x80 | ((u & 0x3F000) >> 12);
                    *_dst++ = 0x80 | ((u & 0xFC0) >> 6);
                    *_dst++ = 0x80 | (u & 0x3F);
                }
                else
                    ;//dbk("ERROR NO Surrogate");
            }
            else goto _UTF_3;
        }
        *_dst = '\0';
        return (unsigned long)(size_t)(_dst - bak);
    }


    std::string &toString(const FName &fname) {
        const uint64_t cacheKey = (static_cast<uint64_t>(fname.ComparisonIndex) << 32) |
            static_cast<uint32_t>(fname.Number);
        if (nameCache.find(cacheKey) != nameCache.end())
            return nameCache[cacheKey];
        static char name[(MAX_NAME_LENGTH + 1) << 2] = { 0 };
        static wchar_t wname[MAX_NAME_LENGTH + 1] = { 0 };
        uint32_t block = fname.ComparisonIndex >> 16;
        uint16_t offset = fname.ComparisonIndex & 0xFFFF;
        uintptr_t entry = Memory::readOffset<uintptr_t>(GNAMES_OFFSET + 8 * (block + 2)) + (static_cast<uintptr_t>(offset) * 2);
        FNameEntryHeader chunk = Memory::read<FNameEntryHeader>(entry);
        if (chunk.Len > MAX_NAME_LENGTH)
            return nameCache[cacheKey] = "<invalid FName>";

        if (chunk.bIsWide) {
            const wchar_t* wideName = reinterpret_cast<const wchar_t*>(entry + sizeof(FNameEntryHeader));
            wcsncpy_s(wname, wideName, chunk.Len);
            wname[chunk.Len] = L'\0';
            tou(name, wname);
        } else {
            const char* ansiName = reinterpret_cast<const char*>(entry + sizeof(FNameEntryHeader));
            strncpy_s(name, ansiName, chunk.Len);
            name[chunk.Len] = '\0';
		}
        std::string result(name);
        if (fname.Number > 0)
            result += "_" + std::to_string(fname.Number - 1);
        return nameCache[cacheKey] = std::move(result);
    }

}