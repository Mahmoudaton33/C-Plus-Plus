#include <iostream>
#include "Example1.hpp"
#include <vector>



// Copy Constructor "Deep Copy" &
// Move Constructor 

int main()
{
    std::vector<MOVE> vec;
    vec.push_back(MOVE{10});

    vec.push_back(MOVE{20});
    //vec.push_back(MOVE{30});

/*
    for(int i=0; i<1; i++)
    {
        std::cout<< vec[i].Get_data() << std::endl;
    }
    */

}