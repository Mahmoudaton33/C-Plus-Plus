#ifndef _CLASSES_H_
#define _CLASSES_H_

#include <string>


class Player
{
    private:
    std::string name;
    int age;
    static int number;

    public:
    Player(std::string name , int age);
    std::string Get_name(void) const;
    void Set_Name(std::string name);
};

#endif