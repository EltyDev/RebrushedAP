#include "Engine/FName.hpp"
#include "Utils/Function.hpp"


namespace Engine {

    std::unordered_map<uint64_t, std::string> FName::_cache;

    FName::FName(const std::string &name, EFindName findType) {
        if (name.empty()) {
            this->ComparisonIndex = 0;
            this->Number = 0;
            return;
        }
        Utils::Function::call<0x17b14f0, void(*)(FName*, char const *, EFindName)>(this, name.c_str(), findType);
        const uint64_t cacheKey = (static_cast<uint64_t>(this->ComparisonIndex) << 32) | static_cast<uint32_t>(this->Number);
        _cache[cacheKey] = name;
    }

    static bool safeName(const FName* fname, FString& out) {
        __try {
            Utils::Function::call<0x17be300, FString *(*)(FName const *, FString *)>(fname, &out);
            return true;
        } __except (EXCEPTION_EXECUTE_HANDLER) {
            out = FString(L"None");
            return false;
        }
    }

    const std::string &FName::ToString() const {
        const uint64_t cacheKey = (static_cast<uint64_t>(this->ComparisonIndex) << 32) | static_cast<uint32_t>(this->Number);
        if (_cache.find(cacheKey) != _cache.end())
            return _cache[cacheKey];
        FString string;
        safeName(this, string);
        _cache[cacheKey] = string.ToString();
        return _cache[cacheKey];
    }

    bool FName::operator==(char const *other) const {
        return Utils::Function::call<0x17b4ca0, bool(*)(FName const *, char const *)>(this, other);
    }

    bool FName::operator==(FName &&other) const {
        return this->ComparisonIndex == other.ComparisonIndex && this->Number == other.Number;
    }
}