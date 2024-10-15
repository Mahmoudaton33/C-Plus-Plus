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
#endif