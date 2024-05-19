#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int roll_no;

public:
    // Member function to take input of data members
    void info() {
        name = "John";
        roll_no = 102;
    }

    // Member function to display the data members
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << roll_no << std::endl;
    }
};

int main() {
    // Create an object of the class Student
    Student s;

    // Call the member function to assign values to data members
    s.info();

    // Call the member function to display the data members
    s.display();

    return 0;
}