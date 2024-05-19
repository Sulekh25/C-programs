#include <iostream>
#include <string>

class Student {
public:
    void setDetails(const std::string& name, int rollNumber, const std::string& phoneNumber, const std::string& address) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->phoneNumber = phoneNumber;
        this->address = address;
    }

    void printDetails() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Address: " << address << std::endl;
    }

private:
    std::string name;
    int rollNumber;
    std::string phoneNumber;
    std::string address;
};

int main() {
    Student sam;
    sam.setDetails("Sam", 1, "1234567890", "123 Main Street");

    Student john;
    john.setDetails("John", 2, "9876543210", "456 Elm Street");

    sam.printDetails();
    std::cout << std::endl;
    john.printDetails();

    return 0;
}