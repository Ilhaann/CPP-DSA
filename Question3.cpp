#include <iostream>

double calculateArea(double side) {
    return side * side;
}

double calculatePerimeter(double side) {
    return 4.0 * side;
}

int main() {
    double side;

    std::cout << "Enter the side length of the square: ";
    std::cin >> side;

    std::cout << "Area: " << calculateArea(side) << std::endl;
    std::cout << "Perimeter: " << calculatePerimeter(side) << std::endl;

    return 0;
}