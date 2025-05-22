#pragma once
#include <iostream>
#include <memory>
#include "RoleBehaviour.h"

class User
{
public:
    User(const std::string& name, std::unique_ptr<RoleBehaviour> behaviour);

    void setName(const std::string& name);
    std::string getName() const;

    void setTypeBehaviour(std::unique_ptr<RoleBehaviour> behaviour);

    void say(const std::string& message);
    void Type();

private:
    std::string name;
    std::unique_ptr<RoleBehaviour> behaviour;
};
