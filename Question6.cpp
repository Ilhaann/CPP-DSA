#include <iostream>

int main() {
    double values[5];
    double sum = 0.0;
    double average;

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter value " << (i + 1) << ": ";
        std::cin >> values[i];
    }

    for (int i = 0; i < 5; i++) {
        sum += values[i];
    }

    average = sum / 5.0;

    std::cout << "The average of the values is: " << average << std::endl;

    return 0;
}