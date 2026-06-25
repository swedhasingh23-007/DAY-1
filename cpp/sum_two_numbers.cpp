#include <iostream>

int main() {
    double a, b;
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> a >> b)) {
        return 0;
    }
    std::cout << "Sum = " << (a + b) << std::endl;
    return 0;
}
