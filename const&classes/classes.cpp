#include <iostream>
#include <string>

#include "classes.hpp"




Player::Player(std::string name , int age)
{
    this->name = name;
    this->age = age;
}

std::string &Player::Get_name(void)
{
    return this->name;
}

void Player::Set_Name(std::string name)
{
    this->name = name;
}
void Player::Display(const Player &pl)
{
    std::cout << pl.Get_name() << std::endl;
}
