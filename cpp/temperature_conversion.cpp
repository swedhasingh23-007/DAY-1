#include <iostream>

int main() {
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    if (!(std::cin >> celsius)) {
        return 0;
    }
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    std::cout << "Temperature in Fahrenheit = " << fahrenheit << std::endl;
    return 0;
}
