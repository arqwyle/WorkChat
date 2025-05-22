#include "pch.h"
#include "MiddleBehaviour.h"
#include "User.h"
#include "Logger.h"

void MiddleBehaviour::act(User* user)
{
	user->say("Hey");
	user->say("I want a merge. Will somebody review it for me?");
	if(Logger::getInstance().getLogs().find("Team Lead") != std::string::npos ||
	   Logger::getInstance().getLogs().find("TL") != std::string::npos)
	{
		user->say("AAAAaaa! No! No TL code review, please!");
	}
}
