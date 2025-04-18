#include <iostream>
#include <limits>

using namespace std;

void pow_2(unsigned n)
{
    if (n == 0) {
        cout << "NO";
        return;
    }
    
    if (n == 1) {
        cout << "NO";
        return;
    }
    
    if (n == 2) {
        cout << "YES";
        return;
    }
    
    if (n % 2 == 1) {
        cout << "NO";
        return;
    }
    
    pow_2(n / 2);
}

int main() {
    setlocale(0, "rus");
    unsigned n;
    
    cout << "Введите натуральное число: ";
    while (!(cin >> n))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Неверный ввод! Введите натуральное число: ";
    }
    
    pow_2(n);
    
    return 0;
}