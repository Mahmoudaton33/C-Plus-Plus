#include <iostream>
#include<string>
#include "classes1.hpp"





int main()
{
    /*
    Person p1("John", 30);  // Create p1
    Person p2(p1);  // User-defined copy constructor is called

    p1.display();
    p2.display();

    Dog d1("Popy" , 3);
    Dog d2(d1);

    d2.Set_name("Popy2");
    d2.Display_DogInfo();
    */
   //////////////// SHALLOW COPY ///////////////
   Shallow sh1(50);
   Shallow sh2 = sh1;
   std::cout << sh1.Get_data() << std::endl;
   sh2.Set_data(99);
   std::cout << sh1.Get_data() << std::endl;
   ///////////////////////////////////////////
   
    return 0;

}