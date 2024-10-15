#include <iostream>
#include "classes1.hpp"



void Dog::Set_Age(int Age)
{
    age = Age;
}
Dog::Dog()
{
    std::cout << "Dog default constructor " << std::endl;
}
Dog::Dog(std::string name)
{
    std::cout << "constructor name >> "<< name << std::endl;
}

Dog::~Dog()
{
    std::cout <<"Dog Destructor "<< std::endl;
}
int Dog::Get_Age()
{
    return age;
}

void Dog::Set_Name(std::string Name)
{
    name = Name;
}
std::string Dog::Get_Name()
{
    return name;
}
 

Player::Player():Player("None",0,0)        // Delegating constructor 
{
    std::cout << "this is a Default constructor "<< std::endl;
}

Player::Player(std::string name_val):Player(name_val , 0 , 0)
{
    std::cout << "one-arg constructor "<<std::endl;
}

Player::Player(std::string name_val , int age_val , int xp_val): name{name_val},age{age_val},xp{xp_val}
{
    
}

void Player::print_data()
{
    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << xp << std::endl;
}

DataBaseConnection::DataBaseConnection():DataBaseConnection("local::192.168.9.56" , true)
{

}
DataBaseConnection::DataBaseConnection(std::string connStr):DataBaseConnection(connStr , true)
{
    
}

DataBaseConnection::DataBaseConnection(std::string connStr , bool conn):connectionString{connStr},connected{conn}
{
    
}
void DataBaseConnection::print_server_state(void)
{
    std::cout << "server name >> "<< connectionString << std::endl;
    std::cout << "server state >> "<< connected << std::endl;
}
