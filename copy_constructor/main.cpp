#include <iostream>
#include<string>
#include "classes1.hpp"





int main()
{
    Person p1("John", 30);  // Create p1
    Person p2(p1);  // User-defined copy constructor is called

    p1.display();
    p2.display();

    return 0;

}