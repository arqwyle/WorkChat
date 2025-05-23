#pragma once
#include <string>

class Logger
{
public:
    static Logger& getInstance();

    void log(const std::string& message);

    std::string getLogs() const;

private:
    Logger() = default;
    ~Logger() = default;

    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    std::string logs;
};
