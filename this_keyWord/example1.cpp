#include "example1.hpp"
#include <iostream>
#include <string>

void Player::check_data(const Player &name)
{
    if(this == &name)
    {
        std::cout << "the same object "<<std::endl;
    }
    else
    {
        std::cout << "Not equall"<<std::endl;
    }
}

void Player::Print_data()
{
    std::cout << player_name;
}

void Player::Set_name(const std::string name)
{
    player_name = name;
}