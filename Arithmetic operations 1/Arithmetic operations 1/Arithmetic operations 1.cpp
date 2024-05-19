#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 5;

    std::cout << "Numbers: " << num1 << ", " << num2 << std::endl;

    // Addition
    std::cout << "Addition: " << num1 + num2 << std::endl;

    // Subtraction
    std::cout << "Subtraction: " << num1 - num2 << std::endl;

    // Multiplication
    std::cout << "Multiplication: " << num1 * num2 << std::endl;

    // Division
    if (num2 != 0) {
        std::cout << "Division: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Error! Division by zero is not allowed." << std::endl;
    }

    // Modulus
    if (num2 != 0) {
        std::cout << "Modulus: " << num1 % num2 << std::endl;
    } else {
        std::cout << "Error! Division by zero is not allowed." << std::endl;
    }

    return 0;
}