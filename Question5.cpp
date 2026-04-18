#include <iostream>

int main() {
    double x = 0.0;
    int y = 20;

    do {
        y = y - 4;
        x = x + (2.0 / y);
    } while (y >= 6);

    std::cout << x << std::endl;

    return 0;
}