#include "pch.h"
#include "UserBehaviour.h"
#include "User.h"

void UserBehaviour::act(User* user)
{
    user->say("Hey");
}
