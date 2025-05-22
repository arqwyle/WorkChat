#pragma once
#include "RoleBehaviour.h"

class MiddleBehaviour : public RoleBehaviour
{
public:
	void act(User* user) override;
};
