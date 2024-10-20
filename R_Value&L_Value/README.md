#R_Value&&L_Value




##Example1

```cpp
int x{100};
int &&R_value = 300;       
R_value = 400;      // valid >> change r value to 400
```
##Example2
```cpp
int x{100};
int &&R_value = x;  // compiler error >> assign L-value to R-value reference 
```
#Example3
```cpp
void func(int &num);

int x{100};
func(x);        // ok 
func(200);      // error Assign R_value to L-value reference 
```

##Example4
```cpp
void func(int &&num);

int x{100};
func(x);        // error Assign L_value to R_value reference 
func(200);      // ok
```

##Example5  
```cpp
int &x = 10;        // Error
const int &x = 10;  // valid, here compiler gives an address for 10 as per x is const and will not change.
```
##Example6
```cpp
void SetValue(int &value)
{
    value = 20;
}

int x = 5;
SetValue(x);    // valid 
SetValue(50);   // Error 

void SetValue(const int &value)
{
    //value = 20;
}
SetValue(50);   // valid
```

## Example7 >> Move constructor 

```cpp 

std::string s1 = "Ahmed";
std::string s2 = "Mahmoud";
std::string s3 = s1 + s2;      // default copy assignment constructor which takes to much to for copying 
// we can make Move construtor and it is better than copying 
std::string &&s3 = s1+s2;
// here s3 is Rvalue reference and used to make move constructor assignment instead of copying constructor assignment 
```

