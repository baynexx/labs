#include <iostream>
#include <cmath>

int main() {
    double x, y;
    std::cout << "Введите x: ";
    std::cin >> x;

    if (x < -2) {
        y = sin(6 * pow(x, 3)) + 4 * x - pow(x, 4);
    } else if (x < 3) {
        y = 2 * log(x - 1) - exp(1);
    } else {
        y = (2 * pow(x, 3) + 4) / ((5 * pow(x, 2) - 2) * tan(2 * x + 1));
    }

    std::cout << "y = " << y << std::endl;
    return 0;
}