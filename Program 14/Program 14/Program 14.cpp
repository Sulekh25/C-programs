#include <iostream>

// Function with no arguments and no return value
void printHello() {
    std::cout << "Hello!" << std::endl;
}

// Function with no arguments and return value
int getRandomNumber() {
    return rand();
}

// Function with arguments and no return value
void printSum(int a, int b) {
    int sum = a + b;
    std::cout << "Sum: " << sum << std::endl;
}

// Function with arguments and return value
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Call the functions
    printHello();

    int randomNumber = getRandomNumber();
    std::cout << "Random number: " << randomNumber << std::endl;

    printSum(5, 3);

    int result = multiply(4, 6);
    std::cout << "Multiplication result: " << result << std::endl;

    return 0;
}