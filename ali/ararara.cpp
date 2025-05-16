#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Введите текст: ";
    string text;
    getline(cin, text);
    
    int number = 0;
    bool found = false;
    
    for (char c : text) {
        if (c >= '0' && c <= '9') {
            number = number * 10 + (c - '0');
            found = true;
        }
        else if (found) {
            break; // Останавливаемся после первого числа
        }
    }
    
    cout << "Найденное число: " << number;
    return 0;
}