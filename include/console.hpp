#ifndef CONSOLE_HPP_
#define CONSOLE_HPP_

#include <string>
#include <Windows.h>
#include <sstream>

#undef ERROR

enum class LogLevel {
    SUCCESS,
    INFO,
    WARNING,
    ERROR
};

class Console {
    public:
        Console();
        ~Console();
        DWORD write(const std::string& message);
        std::string read();

        template<typename... Args>
        void log(LogLevel level, Args&&... args)
        {
            std::ostringstream oss;
            (oss << ... << std::forward<Args>(args));
            std::string message = oss.str();
            WORD color = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
            const char* levelName = "";
            switch (level)
            {
            case LogLevel::INFO:
                color = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
                levelName = "[INFO] ";
                break;
            case LogLevel::WARNING:
                color = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
                levelName = "[WARNING] ";
                break;
            case LogLevel::ERROR:
                color = FOREGROUND_RED | FOREGROUND_INTENSITY;
                levelName = "[ERROR] ";
                break;
            case LogLevel::SUCCESS:
                color = FOREGROUND_GREEN | FOREGROUND_INTENSITY;
                levelName = "[SUCCESS] ";
                break;
            }
            SetConsoleTextAttribute(_writeHandle, color);
            write(std::string(levelName) + message + "\r\n");
            SetConsoleTextAttribute(
                _writeHandle,
                FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
            );
        }
    private:
        HANDLE _readHandle;
        HANDLE _writeHandle;
        bool _isAllocated;
};


#endif /* !CONSOLE_HPP_ */
