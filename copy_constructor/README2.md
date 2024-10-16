## Classes Notes



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