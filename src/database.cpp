#include <iostream>

#include "minidb/database.h"

void Database::addUsers()
{
    User user;

    std::cout << "Enter user ID: ";
    std::cin >> user.id;

    std::cout << "Enter user name: ";
    std::cin >> user.name;

    std::cout << "Enter user age: ";
    std::cin >> user.age;

    users.push_back(user);

    std::cout << "User added successfully!" << std::endl;
}

void Database::showUsers()
{
    std::cout << "\nUsers:\n";
    std::cout << "-------------------------\n";

    for (const User& user : users)
    {
        std::cout << "ID: " << user.id
                  << " | Name: " << user.name
                  << " | Age: " << user.age
                  << '\n';
    }
}