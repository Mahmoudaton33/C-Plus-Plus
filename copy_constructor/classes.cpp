#include <iostream>
#include "classes1.hpp"



Person::Person(const char* n, int a) {
    name = new char[std::strlen(n) + 1];  // Allocate memory for name
    std::strcpy(name, n);
    age = a;
}

Person::Person(const Person& other) {
    name = new char[strlen(other.name) + 1];  // Allocate new memory
    strcpy(name, other.name);  // Copy the name
    age = other.age;
    std::cout << "Copy constructor called!" << std::endl;
}

Person::~Person() {
    std::cout << "allocated memory is deleted successuflly"<<std::endl;
    delete[] name;
}

void Person::display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }