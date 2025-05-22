#pragma once
#include <string>

class LogUtils
{
public:
	static std::string findUserByMessage(const std::string& logs, const std::string& targetMessage);
};
