// Вычеслить значение z при заданных x, y.
// Автор : Умашев Али ВПР12
// Дата : 13.02.25
#include <iostream>
int main() {
    double x, y, z;

    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение y: ";
    std::cin >> y;

    z = x * x * x + 2 * x * x - 5 * y;

    std::cout << "Значение z: " << z << std::endl;

    return 0;

}