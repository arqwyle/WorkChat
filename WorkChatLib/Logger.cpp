#include "pch.h"
#include "Logger.h"

Logger& Logger::getInstance()
{
    static Logger instance;
    return instance;
}

void Logger::log(const std::string& message)
{
    logs += message;
}

std::string Logger::getLogs() const
{
    return logs;
}
