#ifndef __CLASSES1_H_
#define __CLASSES1_H_
#include <string>

class Dog{
    private:
    std::string name;
    int age;

    public:
    std::string Get_Name();
    void Set_Name(std::string name);

    Dog();                      // Default constructor 
    Dog(std::string name);      // Intialized constructor 
    int Get_Age();
    void Set_Age(int Age);
    ~Dog();                     // Destructor 
};



class Player
{
    private:
    std::string name {"ATON"};
    int age;
    int xp;

    public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val , int age_val , int xp_val);
    void print_data();

};



class DataBaseConnection
{
    private:
    std::string connectionString;
    bool connected = false;

    public:
    DataBaseConnection();
    DataBaseConnection(std::string connStr);
    DataBaseConnection(std::string connStr , bool conn);

    void print_server_state(void);

};

#endif