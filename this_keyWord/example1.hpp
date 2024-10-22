#ifndef _EXAMPLE1_H_
#define _EXAMPLE1_H_
#include <string>

class Player
{
    private:
    std::string player_name = "Ahmed";

    public:
    void Set_name(const std::string name);
    void check_data(const Player &name);
    void Print_data();

};










#endif