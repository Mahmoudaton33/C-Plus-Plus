# This-KeyWord


## Example1

### Constructor with the same parameter name as the class member
```cpp
class Player {
    std::string name;

public:
    Player(const std::string& name) {
        // Use 'this' to refer to the class member
        this->name = name;
    }
```

## Example2

### Method to modify the player's name and return the current object

```cpp
class Player {
    std::string name;

public:
    Player(const std::string& name) : name(name) {}

    // Method to modify the player's name and return the current object
    Player& set_name(const std::string& new_name) {
        this->name = new_name;
        return *this;  // Return the current object by reference
    }
```
## Example3

### Checking for Self-assignment in Operator Overloading

```cpp
class Player {
    std::string name;

public:
    Player(const std::string& name) : name(name) {}

    // Overloading the assignment operator
    Player& operator=(const Player& other) {
        // Check for self-assignment
        if (this == &other) {
            std::cout << "Self-assignment detected." << std::endl;
            return *this;
        }

        // Perform the assignment
        this->name = other.name;
        return *this;
    }

    void print_name() {
        std::cout << "Player Name: " << name << std::endl;
    }
};

int main() {
    Player player1("John");
    Player player2("Alex");

    player1 = player2;  // Assign player2 to player1
    player1.print_name();  // Output: Player Name: Alex

    player1 = player1;  // Self-assignment
    return 0;
}
```
