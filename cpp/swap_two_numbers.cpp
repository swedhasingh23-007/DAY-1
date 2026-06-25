#include <iostream>

int main() {
    double a, b;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> a >> b)) {
        return 0;
    }
    double temp = a;
    a = b;
    b = temp;
    std::cout << "After swap: first = " << a << ", second = " << b << std::endl;
    return 0;
}
