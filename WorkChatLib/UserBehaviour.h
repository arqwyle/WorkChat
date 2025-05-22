#pragma once
#include "RoleBehaviour.h"

class UserBehaviour : public RoleBehaviour
{
public:
	void act(User* user) override;
};
