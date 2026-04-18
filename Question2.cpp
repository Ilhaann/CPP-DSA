#include <iostream>
#include <cmath>

int main() {
    double radius;
    double volume;
    const double PI = 3.141592653589793;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    volume = (4.0 / 3.0) * PI * std::pow(radius, 3);

    std::cout << "The volume of the sphere is: " << volume << std::endl;

    return 0;
}