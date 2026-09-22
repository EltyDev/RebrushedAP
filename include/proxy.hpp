#ifndef PROXY_HPP_
#define PROXY_HPP_

#include <Windows.h>

typedef BOOL (WINAPI *PFN_GetFileVersionInfoA)(LPCSTR,  DWORD, DWORD, LPVOID);
typedef BOOL (WINAPI *PFN_GetFileVersionInfoW)(LPCWSTR, DWORD, DWORD, LPVOID);
typedef BOOL (WINAPI *PFN_GetFileVersionInfoExA)(DWORD, LPCSTR,  DWORD, DWORD, LPVOID);
typedef BOOL (WINAPI *PFN_GetFileVersionInfoExW)(DWORD, LPCWSTR, DWORD, DWORD, LPVOID);
typedef int (WINAPI *PFN_GetFileVersionInfoByHandle)(int, LPCWSTR, int, int);

typedef DWORD (WINAPI *PFN_GetFileVersionInfoSizeA)(LPCSTR,  LPDWORD);
typedef DWORD (WINAPI *PFN_GetFileVersionInfoSizeW)(LPCWSTR, LPDWORD);
typedef DWORD (WINAPI *PFN_GetFileVersionInfoSizeExA)(DWORD, LPCSTR,  LPDWORD);
typedef DWORD (WINAPI *PFN_GetFileVersionInfoSizeExW)(DWORD, LPCWSTR, LPDWORD);

typedef DWORD (WINAPI *PFN_VerFindFileA)(DWORD, LPCSTR,  LPCSTR,  LPCSTR,  LPSTR,  PUINT, LPSTR,  PUINT);
typedef DWORD (WINAPI *PFN_VerFindFileW)(DWORD, LPCWSTR, LPCWSTR, LPCWSTR, LPWSTR, PUINT, LPWSTR, PUINT);

typedef DWORD (WINAPI *PFN_VerInstallFileA)(DWORD, LPCSTR,  LPCSTR,  LPCSTR,  LPCSTR,  LPCSTR,  LPSTR,  PUINT);
typedef DWORD (WINAPI *PFN_VerInstallFileW)(DWORD, LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR, LPWSTR, PUINT);

typedef DWORD (WINAPI *PFN_VerLanguageNameA)(DWORD, LPSTR,  DWORD);
typedef DWORD (WINAPI *PFN_VerLanguageNameW)(DWORD, LPWSTR, DWORD);

typedef BOOL (WINAPI *PFN_VerQueryValueA)(LPCVOID, LPCSTR,  LPVOID*, PUINT);
typedef BOOL (WINAPI *PFN_VerQueryValueW)(LPCVOID, LPCWSTR, LPVOID*, PUINT);

namespace Proxy {
    static PFN_GetFileVersionInfoA pGetFileVersionInfoA       = NULL;
    static PFN_GetFileVersionInfoW pGetFileVersionInfoW       = NULL;
    static PFN_GetFileVersionInfoExA pGetFileVersionInfoExA     = NULL;
    static PFN_GetFileVersionInfoExW pGetFileVersionInfoExW     = NULL;
    static PFN_GetFileVersionInfoByHandle pGetFileVersionInfoByHandle = NULL;

    static PFN_GetFileVersionInfoSizeA pGetFileVersionInfoSizeA = NULL;
    static PFN_GetFileVersionInfoSizeW pGetFileVersionInfoSizeW  = NULL;
    static PFN_GetFileVersionInfoSizeExA pGetFileVersionInfoSizeExA  = NULL;
    static PFN_GetFileVersionInfoSizeExW pGetFileVersionInfoSizeExW = NULL;

    static PFN_VerFindFileA pVerFindFileA = NULL;
    static PFN_VerFindFileW pVerFindFileW = NULL;

    static PFN_VerInstallFileA pVerInstallFileA = NULL;
    static PFN_VerInstallFileW pVerInstallFileW = NULL;

    static PFN_VerLanguageNameA pVerLanguageNameA = NULL;
    static PFN_VerLanguageNameW pVerLanguageNameW = NULL;

    static PFN_VerQueryValueA pVerQueryValueA = NULL;
    static PFN_VerQueryValueW pVerQueryValueW = NULL;

    static HMODULE hOriginal;

    void load();
    void unload();
};

#endif /* !PROXY_HPP_ */
