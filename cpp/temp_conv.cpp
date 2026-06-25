#include <iostream>

int main() {
    double celsius;
    std::cout << "Enter temperature in Celsius: ";
    if (!(std::cin >> celsius)) {
        return 0;
    }
    double fahrenheit = (celsius * 9/5.0) + 32;
    std::cout << celsius << "°C = " << fahrenheit << "°F" << std::endl;
    return 0;
}
