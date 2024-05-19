#include <iostream>

int main() {
    try {
        // Code that may throw an exception
        throw std::runtime_error("An error occurred!");
    } catch (const std::exception& e) {
        // Exception handling code
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}