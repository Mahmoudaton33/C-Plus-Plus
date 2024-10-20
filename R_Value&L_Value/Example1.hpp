#ifndef _EXAMPLE_H_
#define _EXAMPLE_H_
class MOVE
{
    private:
    int *data;

    public:

    MOVE(int d);
    //MOVE(const MOVE &source);     // Copy Constructor "Deep Copy" 
    MOVE(MOVE &&source)noexcept;    // Move Constructor 
    void Set_data(int d);
    int Get_data(void);

    ~MOVE();
};


#endif