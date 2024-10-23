#include <iostream>
#include <string>

#include "classes.hpp"




Player::Player(std::string name , int age)
{
    this->name = name;
    this->age = age;
}

std::string Player::Get_name(void) const
{
    return this->name;
}

void Player::Set_Name(std::string name)
{
    this->name = name;
}

