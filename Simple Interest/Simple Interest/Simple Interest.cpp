#include <iostream>

int main() {
    double principal, rate, time, interest;

    // Input values
    std::cout << "Enter principal amount: ";
    std::cin >> principal;

    std::cout << "Enter interest rate (in percentage): ";
    std::cin >> rate;

    std::cout << "Enter time period (in years): ";
    std::cin >> time;

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Output the result
    std::cout << "Simple Interest = " << interest << std::endl;

    return 0;
}