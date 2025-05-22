#include "pch.h"
#include "JuniorBehaviour.h"
#include "User.h"

void JuniorBehaviour::act(User* user)
{
    user->say("Hey");
    user->say("I want a merge. Will somebody review it for me?");
}
