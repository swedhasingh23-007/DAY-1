#include <iostream>

int main() {
    double principal, rate, time;
    std::cout << "Enter principal, rate (%) and time (years): ";
    if (!(std::cin >> principal >> rate >> time)) {
        return 0;
    }
    double interest = principal * rate * time / 100.0;
    std::cout << "Simple Interest = " << interest << std::endl;
    return 0;
}
