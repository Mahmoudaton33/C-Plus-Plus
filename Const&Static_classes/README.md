# Const KeyWord



## Example 1

### When you try access a method from const object you will got a compiler error:

```cpp
std::string Player::Get_name(void) 
{
    return this->name;
}

int main()
{
   const Player pl1("ATON" , 29);
   std::cout << pl1.Get_name() >>std::endl; // Error

}
```
### Solution >> tell the compiler that the method will not exciplicity change the obiect 

```cpp
std::string Player::Get_name(void) const
{
    return this->name;
}
int main()
{
   const Player pl1("ATON" , 29);
   std::cout << pl1.Get_name() >>std::endl; // valid

}
```