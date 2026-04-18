#include <iostream>

void checkCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        std::cout << ch << " is an uppercase character." << std::endl;
    } else if (ch >= 'a' && ch <= 'z') {
        std::cout << ch << " is a lowercase character." << std::endl;
    } else {
        std::cout << ch << " is not an alphabetic character." << std::endl;
    }
}

int main() {
    char inputChar;

    std::cout << "Enter a character: ";
    std::cin >> inputChar;

    checkCase(inputChar);

    return 0;
}