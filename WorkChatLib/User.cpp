#include "pch.h"
#include "User.h"
#include "Logger.h"

User::User(const std::string& name, std::unique_ptr<RoleBehaviour> behaviour)
    : name(name), behaviour(std::move(behaviour))
{}

void User::setName(const std::string& name)
{
    this->name = name;
}

std::string User::getName() const
{
    return name;
}

void User::setTypeBehaviour(std::unique_ptr<RoleBehaviour> newBehaviour)
{
    behaviour = std::move(newBehaviour);
}

void User::say(const std::string& message)
{
    std::string logString = name + ": " + message + "\n";
    std::cout << logString;
    Logger::getInstance().log(logString);
}

void User::Type()
{
    behaviour->act(this);
}
