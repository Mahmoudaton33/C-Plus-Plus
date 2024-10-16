# C-Plus-PLus

## Classes Notes

### Types of Copy Constructor 

1- Default Copy Constructor  >> Provided by the compiler automatically.

```cpp
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

int main() {
    Person p1;  // Create an object p1
    p1.name = "John";
    p1.age = 30;

    // Default copy constructor is called here
    Person p2 = p1;  // Copying p1 to p2

    cout << "p1: " << p1.name << ", " << p1.age << endl;
    cout << "p2: " << p2.name << ", " << p2.age << endl;

    return 0;
}

```


2 - User Defined Copy Constructor  >> You explicitly define it to customize how the copying takes place.

```cpp
class Person {
private:
    char* name;
    int age;

public:
    // Constructor
    Person(const char* n, int a) {
        name = new char[strlen(n) + 1];  // Allocate memory for name
        strcpy(name, n);
        age = a;
    }

    // User-defined copy constructor (deep copy)
    Person(const Person& other) {
        name = new char[strlen(other.name) + 1];  // Allocate new memory
        strcpy(name, other.name);  // Copy the name
        age = other.age;
        cout << "Copy constructor called!" << endl;
    }

    // Destructor to free memory
    ~Person() {
        delete[] name;
    }

    // Display function
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};



int main()
{
    Person p1("John", 30);  // Create p1
    Person p2(p1);  // User-defined copy constructor is called

    p1.display();
    p2.display();

    return 0;

}


```


### Shallow && Deep Copy


# 1- Shallow Copy
1 - Copies the object’s pointer members as they are, meaning both the original and the copied object share the same memory for pointers.
2 - Problem: If one object modifies or deletes the memory, the other one gets affected (causing dangling pointers or undefined behavior).

```cpp
Shallow(int value) {
        data = new int(value);
    }

    // Copy constructor (shallow copy)
    Shallow(const Shallow& obj) {
        data = obj.data;  // Just copies the pointer, not the data itself
        std::cout << "Shallow copy constructor called\n";
    }
```

# 2 - Deep Copy
1 - Copies not only the object’s values but also allocates new memory for pointer members, ensuring that both objects manage their own memory independently.

```cpp
Deep(int value) {
        data = new int(value);
    }

    // Deep copy constructor
    Deep(const Deep& obj) {
        data = new int(*obj.data);  // Allocate new memory and copy the value
        std::cout << "Deep copy constructor called\n";
    }
```
