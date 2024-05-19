#include <iostream>
#include <string>

struct Student {
    int userId;
    std::string name;
    std::string address;
    std::string contactNumber;
};

void displayStudentInfo(const Student& student) {
    std::cout << "User ID: " << student.userId << std::endl;
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Address: " << student.address << std::endl;
    std::cout << "Contact Number: " << student.contactNumber << std::endl;
}

int main() {
    Student student;

    // Get input from user
    std::cout << "Enter User ID: ";
    std::cin >> student.userId;

    std::cout << "Enter Name: ";
    std::cin.ignore();
    std::getline(std::cin, student.name);

    std::cout << "Enter Address: ";
    std::getline(std::cin, student.address);

    std::cout << "Enter Contact Number: ";
    std::getline(std::cin, student.contactNumber);

    // Display student information
    std::cout << "Student Information:" << std::endl;
    displayStudentInfo(student);

    return 0;
}