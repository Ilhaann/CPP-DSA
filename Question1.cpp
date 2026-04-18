#include <iostream>

int main() {
    int days;
    long long seconds;

    std::cout << "Enter the number of days: ";
    std::cin >> days;

    seconds = static_cast<long long>(days) * 24 * 60 * 60;

    std::cout << "The number of seconds in " << days << " days is: " << seconds << std::endl;

    return 0;
}