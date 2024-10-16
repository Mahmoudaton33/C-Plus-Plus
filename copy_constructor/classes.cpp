#include <iostream>
#include "classes1.hpp"

Person::Person(const char *n, int a)
{
    name = new char[std::strlen(n) + 1]; // Allocate memory for name
    std::strcpy(name, n);
    age = a;
}

Person::Person(const Person &other)
{
    name = new char[strlen(other.name) + 1]; // Allocate new memory
    strcpy(name, other.name);                // Copy the name
    age = other.age;
    std::cout << "Copy constructor called!" << std::endl;
}

Person::~Person()
{
    std::cout << "allocated memory is deleted successuflly" << std::endl;
    delete[] name;
}

void Person::display() const
{
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

Dog::Dog(std::string Name, int Age) : name{Name}, age{Age} {}
Dog::Dog(const Dog &d) : name{d.name}, age{d.age} {}
std::string Dog::Get_name(void)
{
    return name;
}

void Dog::Set_name(std::string Name)
{
    name = Name;
}
void Dog::Set_age(int Age)
{
    age = Age;
}

int Dog::Get_age(void)
{
    return age;
}
void Dog::Display_DogInfo(void)
{
    std::cout << "Dog name is " << name << std::endl;
    std::cout << "Dog age is " << age << std::endl;
}

Shallow::Shallow(int value)
{
    data = new int(value);
}
Shallow::Shallow(const Shallow& obj)
{
    data = obj.data;
    std::cout << "shallow copy constructor called " << std::endl;
}
Shallow::~Shallow()
{
    delete data;
    std::cout << "Destructor is called " << std::endl;
}
void Shallow::Set_data(int value)
{
    *data = value;
}
int Shallow::Get_data(void)
{
    return *data;
}