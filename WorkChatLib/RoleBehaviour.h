#pragma once
#include <string>

class User;

class RoleBehaviour
{
public:
    virtual void act(User* user) = 0;
    virtual ~RoleBehaviour() = default;
};
