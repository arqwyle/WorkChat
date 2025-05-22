#pragma once
#include "RoleBehaviour.h"

class TeamLeadBehaviour : public RoleBehaviour
{
public:
	void act(User* user) override;
};
