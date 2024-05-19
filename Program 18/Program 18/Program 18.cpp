#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Hello, I am an object!" << std::endl;
    }
};

int main() {
    MyClass obj; // Create an object of MyClass

    MyClass* ptr = &obj; // Create a pointer to the object

    ptr->display(); // Access the object's member function using the pointer

    return 0;
}