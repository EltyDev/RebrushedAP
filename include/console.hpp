#ifndef CONSOLE_HPP_
#define CONSOLE_HPP_

#include <string>
#include <Windows.h>
#include <sstream>

#undef ERROR

#define GREEN "\x1b[32m"
#define BLUE "\x1b[94m"
#define YELLOW "\x1b[33m"
#define RED "\x1b[31m"
#define RESET "\x1b[0m"

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
            std::string prefix;
            switch (level)
            {
            case LogLevel::INFO:
                prefix = BLUE "[INFO] ";
                break;
            case LogLevel::WARNING:
                prefix = YELLOW "[WARNING] ";
                break;
            case LogLevel::ERROR:
                prefix = RED "[ERROR] ";
                break;
            case LogLevel::SUCCESS:
                prefix = GREEN "[SUCCESS] ";
                break;
            }
            write(prefix + message + RESET + "\r\n");
        }
    private:
        HANDLE _readHandle;
        HANDLE _writeHandle;
        bool _isAllocated;
};


#endif /* !CONSOLE_HPP_ */
