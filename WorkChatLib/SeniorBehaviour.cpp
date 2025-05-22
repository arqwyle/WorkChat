#include "pch.h"
#include "SeniorBehaviour.h"
#include "User.h"
#include "Logger.h"

void SeniorBehaviour::act(User* user)
{
	user->say("Hey");
	if(Logger::getInstance().getLogs().find("I want a merge") != std::string::npos)
	{
		user->say("You are such a jnr! Are you afraid of the Team Lead?");
	}
}
