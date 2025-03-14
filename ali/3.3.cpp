#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
    int n;
    cout << "Введите количество элементов массива: ";
    while (!(cin >> n) || n <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка ввода. Пожалуйста, введите положительное целое число: ";
    }

    double a[n];
    srand(time(0));

    cout << "Массив: ";
    for (int i = 0; i < n; ++i) {
        a[i] = (rand() % 200 - 100) / 10.0; // Генерация чисел от -10.0 до 10.0
        cout << a[i] << " ";
    }
    cout << endl;

    // Нахождение номера минимального по модулю элемента
    int mi = 0;
    for (int i = 1; i < n; ++i) {
        if (abs(a[i]) < abs(a[mi])) {
            mi = i;
        }
    }
    cout << "Номер минимального по модулю элемента: " << mi << endl;

    // Нахождение максимального по модулю элемента и вычисление произведения
    int ma = 0;
    for (int i = 1; i < n; ++i) {
        if (abs(a[i]) > abs(a[ma])) {
            ma = i;
        }
    }
    cout << "Номер максимального по модулю элемента: " << ma << endl;
    double p = 1.0;
    for (int i = ma + 1; i < n; ++i) {
        p*=a[i];
    }
    cout << "Произведение элементов после максимального по модулю: " << p << endl;

    // Преобразование массива
    cout << "Преобразованный массив: ";
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
        cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
        cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
} 