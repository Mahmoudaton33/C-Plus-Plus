#include <iostream>
#include "Example1.hpp"





MOVE::MOVE(int d)
{
    data = new int{d};
    std::cout << "simple constructor "<<std::endl;
}
/*
// Copy Constructor "Deep Copy" 
MOVE::MOVE(const MOVE &source) : MOVE(*source.data){
    std::cout << "copy constructor deep copy "<<std::endl;
}
*/

// Move Constructor 
MOVE::MOVE(MOVE &&source) noexcept : data(source.data)
{
    source.data = nullptr;
    std::cout << "Move constructor - moving resource"<<std::endl;
}
void MOVE::Set_data(int d)
{
    *data = d;
}

int MOVE::Get_data(void)
{
    return *data;
}
MOVE::~MOVE()
{
    if(data != nullptr)
    {
        std::cout << "Destructor freeing data for "<<*data<<std::endl;
    }
    else
    {
        std::cout << "Destructor freeing data for nullptr"<<std::endl;

    }
    delete data;
}