#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
    }

    // Parameterized constructor
    MyClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        std::cout << "Copy constructor called" << std::endl;
    }
};

int main() {
    // Create objects using different constructors
    MyClass obj1; // Default constructor
    MyClass obj2(10); // Parameterized constructor
    MyClass obj3 = obj1; // Copy constructor

    return 0;
}