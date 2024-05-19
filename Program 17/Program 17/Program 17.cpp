#include <iostream>

class Base {
public:
    virtual void display() {
        std::cout << "This is the base class." << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "This is the derived class." << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    basePtr->display(); // Calls the derived class's display function

    return 0;
}