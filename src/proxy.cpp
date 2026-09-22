#include "proxy.hpp"
#include <Shlwapi.h>
#include <stdexcept>

void Proxy::load()
{
    CHAR systemPath[MAX_PATH] = {0};
    GetSystemDirectoryA(systemPath, MAX_PATH);
    PathCombineA(systemPath, systemPath, "version.dll");
    pGetFileVersionInfoA = nullptr;
    pGetFileVersionInfoSizeA = nullptr;
    hOriginal = LoadLibraryA(systemPath);
    if (!hOriginal)
        throw std::runtime_error("Failed to load version.dll");
    pGetFileVersionInfoA = (PFN_GetFileVersionInfoA) GetProcAddress(hOriginal, "GetFileVersionInfoA");
    pGetFileVersionInfoW = (PFN_GetFileVersionInfoW) GetProcAddress(hOriginal, "GetFileVersionInfoW");
    pGetFileVersionInfoExA = (PFN_GetFileVersionInfoExA) GetProcAddress(hOriginal, "GetFileVersionInfoExA");
    pGetFileVersionInfoExW = (PFN_GetFileVersionInfoExW) GetProcAddress(hOriginal, "GetFileVersionInfoExW");
    pGetFileVersionInfoByHandle = (PFN_GetFileVersionInfoByHandle) GetProcAddress(hOriginal, "GetFileVersionInfoByHandle");
    pGetFileVersionInfoSizeA = (PFN_GetFileVersionInfoSizeA) GetProcAddress(hOriginal, "GetFileVersionInfoSizeA");
    pGetFileVersionInfoSizeW = (PFN_GetFileVersionInfoSizeW) GetProcAddress(hOriginal, "GetFileVersionInfoSizeW");
    pGetFileVersionInfoSizeExA = (PFN_GetFileVersionInfoSizeExA) GetProcAddress(hOriginal, "GetFileVersionInfoSizeExA");
    pGetFileVersionInfoSizeExW = (PFN_GetFileVersionInfoSizeExW) GetProcAddress(hOriginal, "GetFileVersionInfoSizeExW");
    pVerFindFileA = (PFN_VerFindFileA) GetProcAddress(hOriginal, "VerFindFileA");
    pVerFindFileW = (PFN_VerFindFileW) GetProcAddress(hOriginal, "VerFindFileW");
    pVerInstallFileA = (PFN_VerInstallFileA) GetProcAddress(hOriginal, "VerInstallFileA");
    pVerInstallFileW = (PFN_VerInstallFileW) GetProcAddress(hOriginal, "VerInstallFileW");
    pVerLanguageNameA = (PFN_VerLanguageNameA) GetProcAddress(hOriginal, "VerLanguageNameA");
    pVerLanguageNameW = (PFN_VerLanguageNameW) GetProcAddress(hOriginal, "VerLanguageNameW");
    pVerQueryValueA = (PFN_VerQueryValueA) GetProcAddress(hOriginal, "VerQueryValueA");
    pVerQueryValueW = (PFN_VerQueryValueW) GetProcAddress(hOriginal, "VerQueryValueW");
    if (!pGetFileVersionInfoA || !pGetFileVersionInfoW || !pGetFileVersionInfoExA || !pGetFileVersionInfoExW || !pGetFileVersionInfoByHandle ||
        !pGetFileVersionInfoSizeA || !pGetFileVersionInfoSizeW || !pGetFileVersionInfoSizeExA || !pGetFileVersionInfoSizeExW ||
        !pVerFindFileA || !pVerFindFileW || !pVerInstallFileA || !pVerInstallFileW || !pVerLanguageNameA || !pVerLanguageNameW ||
        !pVerQueryValueA || !pVerQueryValueW)
    {
        FreeLibrary(hOriginal);
        throw std::runtime_error("Failed to get function addresses from version.dll");
    }
}

void Proxy::unload()
{
    if (hOriginal)
    {
        FreeLibrary(hOriginal);
        hOriginal = NULL;
    }
}

extern "C" {
    BOOL WINAPI GetFileVersionInfoA(LPCSTR lpFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
    {
        return Proxy::pGetFileVersionInfoA(lpFilename, dwHandle, dwLen, lpData);
    }

    BOOL WINAPI GetFileVersionInfoW(LPCWSTR lpFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
    {
        return Proxy::pGetFileVersionInfoW(lpFilename, dwHandle, dwLen, lpData);
    }

    BOOL WINAPI GetFileVersionInfoExA(DWORD dwFlags, LPCSTR lpFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
    {
        return Proxy::pGetFileVersionInfoExA(dwFlags, lpFilename, dwHandle, dwLen, lpData);
    }

    BOOL WINAPI GetFileVersionInfoExW(DWORD dwFlags, LPCWSTR lpFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
    {
        return Proxy::pGetFileVersionInfoExW(dwFlags, lpFilename, dwHandle, dwLen, lpData);
    }

    int WINAPI GetFileVersionInfoByHandle(int hFile, LPCWSTR lpFilename, int dwHandle, int dwLen)
    {
        return Proxy::pGetFileVersionInfoByHandle(hFile, lpFilename, dwHandle, dwLen);
    }

    DWORD WINAPI GetFileVersionInfoSizeA(LPCSTR lpFilename, LPDWORD lpdwHandle)
    {
        return Proxy::pGetFileVersionInfoSizeA(lpFilename, lpdwHandle);
    }

    DWORD WINAPI GetFileVersionInfoSizeW(LPCWSTR lpFilename, LPDWORD lpdwHandle)
    {
        return Proxy::pGetFileVersionInfoSizeW(lpFilename, lpdwHandle);
    }

    DWORD WINAPI GetFileVersionInfoSizeExA(DWORD dwFlags, LPCSTR lpFilename, LPDWORD lpdwHandle)
    {
        return Proxy::pGetFileVersionInfoSizeExA(dwFlags, lpFilename, lpdwHandle);
    }

    DWORD WINAPI GetFileVersionInfoSizeExW(DWORD dwFlags, LPCWSTR lpFilename, LPDWORD lpdwHandle)
    {
        return Proxy::pGetFileVersionInfoSizeExW(dwFlags, lpFilename, lpdwHandle);
    }

    DWORD WINAPI VerFindFileA(DWORD dwFlags, LPCSTR szFileName, LPCSTR szWinDir, LPCSTR szAppDir, LPSTR szCurDir, PUINT puCurDirLen, LPSTR szDestDir, PUINT puDestDirLen)
    {
        return Proxy::pVerFindFileA(dwFlags, szFileName, szWinDir, szAppDir, szCurDir, puCurDirLen, szDestDir, puDestDirLen);
    }

    DWORD WINAPI VerFindFileW(DWORD dwFlags, LPCWSTR szFileName, LPCWSTR szWinDir, LPCWSTR szAppDir, LPWSTR szCurDir, PUINT puCurDirLen, LPWSTR szDestDir, PUINT puDestDirLen)
    {
        return Proxy::pVerFindFileW(dwFlags, szFileName, szWinDir, szAppDir, szCurDir, puCurDirLen, szDestDir, puDestDirLen);
    }

    DWORD WINAPI VerInstallFileA(DWORD dwFlags, LPCSTR szSrcFileName, LPCSTR szDestFileName, LPCSTR szSrcDir, LPCSTR szDestDir, LPCSTR szCurDir, LPSTR szTmpFile, PUINT puTmpFileLen)
    {
        return Proxy::pVerInstallFileA(dwFlags, szSrcFileName, szDestFileName, szSrcDir, szDestDir, szCurDir, szTmpFile, puTmpFileLen);
    }

    DWORD WINAPI VerInstallFileW(DWORD dwFlags, LPCWSTR szSrcFileName, LPCWSTR szDestFileName, LPCWSTR szSrcDir, LPCWSTR szDestDir, LPCWSTR szCurDir, LPWSTR szTmpFile, PUINT puTmpFileLen)
    {
        return Proxy::pVerInstallFileW(dwFlags, szSrcFileName, szDestFileName, szSrcDir, szDestDir, szCurDir, szTmpFile, puTmpFileLen);
    }

    DWORD WINAPI VerLanguageNameA(DWORD wLang, LPSTR szLang, DWORD cchLang)
    {
        return Proxy::pVerLanguageNameA(wLang, szLang, cchLang);
    }

    DWORD WINAPI VerLanguageNameW(DWORD wLang, LPWSTR szLang, DWORD cchLang)
    {
        return Proxy::pVerLanguageNameW(wLang, szLang, cchLang);
    }

    BOOL WINAPI VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID* lplpBuffer, PUINT puLen)
    {
        return Proxy::pVerQueryValueA(pBlock, lpSubBlock, lplpBuffer, puLen);
    }

    BOOL WINAPI VerQueryValueW(LPCVOID pBlock, LPCWSTR lpSubBlock, LPVOID* lplpBuffer, PUINT puLen)
    {
        return Proxy::pVerQueryValueW(pBlock, lpSubBlock, lplpBuffer, puLen);
    }
}