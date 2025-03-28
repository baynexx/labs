#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Введите текст: ";
    string s;
    getline(cin, s);

    int num = 0;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0'); // Собираем число из цифр
        }
    }

    cout << "Число: " << num << endl;
    return 0;
}