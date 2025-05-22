#pragma once
#include "RoleBehaviour.h"

class JuniorBehaviour : public RoleBehaviour
{
public:
	void act(User* user) override;
};
