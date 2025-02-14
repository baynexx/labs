// Ввести х, ввести у, вычеслить z.
// Автор : Шевакожев Ислам ВПР12
// Дата : 13.02.25
#include <iostream>
#include <cmath>

int main() {
    double x, y, z;

    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение y: ";
    std::cin >> y;

    z = pow(x, 5) - pow(y, 2) * pow(x, 2) + 7 * y - 3;

    std::cout << "Значение z: " << z << std::endl;

    return 0;
}