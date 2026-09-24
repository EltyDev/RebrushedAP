#include "Console.hpp"
#include <consoleapi2.h>

Console::Console()
{
    _isAllocated = AllocConsole();
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleTitleA("Rebrushed AP Console");
    _writeHandle = CreateFileA("CONOUT$", GENERIC_WRITE, FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, 0, nullptr);
    _readHandle  = CreateFileA("CONIN$",  GENERIC_READ,  FILE_SHARE_READ,  nullptr, OPEN_EXISTING, 0, nullptr);
    DWORD mode;
    GetConsoleMode(_writeHandle, &mode);
    SetConsoleMode(_writeHandle, mode | ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

}

Console::~Console()
{
    if (_writeHandle)
        CloseHandle(_writeHandle);
    if (_readHandle)
        CloseHandle(_readHandle);
    if (_isAllocated)
        FreeConsole(); 
}

DWORD Console::write(const std::string& message)
{
    if (!_isAllocated)
        return 0;   
    DWORD written;
    WriteConsoleA(_writeHandle, message.c_str(), static_cast<DWORD>(message.size()), &written, nullptr);
    return written;
}

std::string Console::read()
{
    if (!_isAllocated)
        return "";
    std::string result;
    CHAR buffer[256] = {0};
    DWORD read = 1;
    while (true)
    {
        if (!ReadConsoleA(_readHandle, buffer, sizeof(buffer) - 1, &read, nullptr))
            break;
        if (read == 0)
            break;
        buffer[read] = '\0';
        result += buffer;
        if (buffer[read - 1] == '\n')
            break;
    }
    result.erase(result.find_last_not_of("\r\n") + 1);
    return result;
}