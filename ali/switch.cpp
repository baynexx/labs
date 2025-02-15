#include <iostream>
using namespace std;

int day; // Global variable

int main() {
    cout << "Введите день недели" << endl;
    cin >> day;
    switch(day) {  
        case 1:
            cout << "Понедельник" << endl;
            break;
        case 2:
            cout << "Вторник" << endl;
            break;
        default:
            cout << "Некорректный ввод" << endl;
            break;
    }
    return 0;
}







