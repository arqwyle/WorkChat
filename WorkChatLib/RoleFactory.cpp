#include "pch.h"
#include "RoleFactory.h"
#include "UserBehaviour.h"
#include "JuniorBehaviour.h"
#include "MiddleBehaviour.h"
#include "SeniorBehaviour.h"
#include "TeamLeadBehaviour.h"

std::unique_ptr<RoleBehaviour> RoleFactory::create(const std::string& role)
{
    if(role == "Junior") return std::make_unique<JuniorBehaviour>();
    if(role == "Middle") return std::make_unique<MiddleBehaviour>();
    if(role == "Senior") return std::make_unique<SeniorBehaviour>();
    if(role == "TeamLead") return std::make_unique<TeamLeadBehaviour>();
    return std::make_unique<UserBehaviour>();
}
