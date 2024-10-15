#include <iostream>
#include<string>
#include "classes1.hpp"





int main()
{
    /*
    Dog dog1("JAC");
    int age;
    std::string name;
    dog1.Set_Name("JAC");
    dog1.Set_Age(3);

    age = dog1.Get_Age();
    name = dog1.Get_Name();

    std::cout <<"dog name is "<< name << std::endl;
    std::cout <<"dog age is "<< age << std::endl;
    */
   //Player player1("Mahmoud" , 29 , 3);
   Player player2;
   Player player3("Aly");
   DataBaseConnection server1;
   DataBaseConnection server2("local:192.168.1.1");
   DataBaseConnection server3("local:192.168.1.1" , false);
   //player1.print_data();
   player2.print_data();
   player3.print_data();

   server1.print_server_state();
   server2.print_server_state();
   server3.print_server_state();


}