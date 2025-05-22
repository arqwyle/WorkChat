#include "pch.h"
#include "TeamLeadBehaviour.h"
#include "User.h"
#include "Logger.h"
#include "LogUtils.h"

void TeamLeadBehaviour::act(User* user)
{
	user->say("Hey");
	user->say("I have a non-fallen prod");
	std::string name = LogUtils::findUserByMessage(Logger::getInstance().getLogs(), "I want a merge. Will somebody review it for me?");
	if(name != "")
	{
		user->say("Of course, baby. Be ready to suffer " + name);
	}
}
