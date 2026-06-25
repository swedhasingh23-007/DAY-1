#include <iostream>

int main() {
    double length, width;
    std::cout << "Enter length and width: ";
    if (!(std::cin >> length >> width)) {
        return 0;
    }
    std::cout << "Area = " << (length * width) << std::endl;
    return 0;
}
