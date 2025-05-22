#include "pch.h"
#include "LogUtils.h"
#include <sstream>

std::string LogUtils::findUserByMessage(const std::string& logs, const std::string& targetMessage)
{
    std::istringstream stream(logs);
    std::string line;

    while(std::getline(stream, line))
    {
        size_t colonPos = line.find(':');
        if(colonPos != std::string::npos)
        {
            std::string message = line.substr(colonPos + 1);
            size_t firstChar = message.find_first_not_of(" \t");
            if(firstChar != std::string::npos)
            {
                message = message.substr(firstChar);
            }

            if(message == targetMessage)
            {
                return line.substr(0, colonPos);
            }
        }
    }

    return "";
}
