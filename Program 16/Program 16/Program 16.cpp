#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int d) : data(d) {}

    friend void displayData(const MyClass& obj);
};

void displayData(const MyClass& obj) {
    std::cout << "Data: " << obj.data << std::endl;
}

int main() {
    MyClass obj(10);
    displayData(obj);

    return 0;
}