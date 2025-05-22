#pragma once
#include <memory>
#include "RoleBehaviour.h"

class RoleFactory
{
public:
	static std::unique_ptr<RoleBehaviour> create(const std::string& role);
};
