#pragma once
#include "RoleBehaviour.h"

class SeniorBehaviour : public RoleBehaviour
{
public:
	void act(User* user) override;
};
