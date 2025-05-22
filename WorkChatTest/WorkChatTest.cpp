#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "..\WorkChatLib\User.h"
#include "..\WorkChatLib\RoleFactory.h"

int main()
{
    std::ifstream file("users.txt");
    std::vector<std::unique_ptr<User>> users;

    if(!file.is_open())
    {
        std::cerr << "Failed to open file" << std::endl;
        return 1;
    }

    std::string line;
    while(std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string name, role;

        if(iss >> name >> role)
        {
            auto behaviour = RoleFactory::create(role);
            users.push_back(std::make_unique<User>(name, std::move(behaviour)));
        }
    }

    file.close();

    for(const auto& user : users)
    {
        user->Type();
    }
}
