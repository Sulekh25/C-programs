#include <iostream>

class Area {
private:
    double length;
    double breadth;

public:
    void setDim(double len, double brd) {
        length = len;
        breadth = brd;
    }

    double getArea() {
        return length * breadth;
    }
};

int main() {
    double length, breadth;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the breadth of the rectangle: ";
    std::cin >> breadth;

    Area rectangle;
    rectangle.setDim(length, breadth);

    std::cout << "Area of the rectangle: " << rectangle.getArea() << std::endl;

    return 0;
}