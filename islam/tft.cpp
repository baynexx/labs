#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, f;
    cout << "Введите значение x: ";
    cin >> x;

    if (x > 0) {
        f = 3 * sqrt(x) - pow(x, 4) * cos(2 * x);
    } else if (x == 0) {
        f = sin(2 * pow(x, 3) - x) + pow(x, 2);
    } else {
        if (x <= 0) {
            cout << "Ошибка: логарифм не определен для x <= 0." << endl;
            return 1;
        }
        f = (18 * (pow(x, 3) - 3)) / (5 * log(x));
    }

    cout << "f = " << f << endl;
    return 0;
}