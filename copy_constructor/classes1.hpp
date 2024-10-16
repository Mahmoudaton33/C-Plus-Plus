#ifndef __CLASSES1_H_
#define __CLASSES1_H_
#include <string>
#include <cstring>



class Person {
private:
    char* name;
    int age;

public:
    // Constructor
    Person(const char* n, int a) ;
    // User-defined copy constructor (deep copy)
    Person(const Person& other);

    // Destructor to free memory
    ~Person() ;

    // Display function
    void display() const;

};

class Dog
{
    private:
    std::string name;
    int age;

    public:
    Dog(std::string Name , int Age);
    Dog(const Dog &d);
    void Set_name(std::string Name);
    std::string Get_name(void);
    void Set_age(int Age);
    int Get_age(void);
    void Display_DogInfo(void);
};


class Shallow
{
    private:
    int *data;

    public:
    Shallow(int value);
    Shallow(const Shallow &obj);
    
    ~Shallow();
    void Set_data(int value);
    int Get_data(void);

};
#endif