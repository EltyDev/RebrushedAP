#include "Proxy.hpp"
#include <Shlwapi.h>
#include <consoleapi.h>
#include <libloaderapi.h>
#include "Rebrushed/AP.hpp"

static HANDLE thread;

BOOL APIENTRY DllMain(HMODULE mod, DWORD reason, LPVOID reserved)
{
    thread = nullptr;
    switch(reason)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(mod);
        Rebrushed::AP::isRunning = true;
        Proxy::load();
        thread = CreateThread(nullptr, 0, [](LPVOID) -> DWORD { Rebrushed::AP::initialize(); return 0; }, nullptr, 0, nullptr);
        break;
    case DLL_PROCESS_DETACH:
        Rebrushed::AP::isRunning = false;
        Proxy::unload();
        if (thread) {
            WaitForSingleObject(thread, 2000);
            CloseHandle(thread);
            thread = nullptr;
        }
        break;
    }
    return TRUE;    
}