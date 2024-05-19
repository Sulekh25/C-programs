#include <iostream>
#include <fstream>
#include <string>
#include <istream>

int main() {
    // Create a file
    std::ofstream file("example.txt");

    if (file.is_open()) {
        std::cout << "File created successfully!" << std::endl;

        // Write to the file
        file << "Hello, World!" << std::endl;
        file << "This is a sample file." << std::endl;

        // Close the file
        file.close();

        // Open the file for reading
        std::ifstream readFile("example.txt");

        #include <string>
#include <istream>

        #include <string>
        #include <istream>

        if (readFile.is_open()) {
            std::cout << "File opened successfully!" << std::endl;

            // Read the file line by line
            std::string line;
            while (std::getline(readFile, line)) {
                std::cout << line << std::endl;
            }

            // Close the file
            readFile.close();
        } else {
            std::cout << "Failed to open the file for reading!" << std::endl;
        }
    } else {
        std::cout << "Failed to create the file!" << std::endl;
    }

    return 0;
}