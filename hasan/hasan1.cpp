// В данной программе мы будем проверять введенный год (високосный или нет).
// Автор : Батраев Хасан ВПР12
// Дата : 13.02.25
#include<iostream>
#include <limits>

using namespace std;

int main(){
    
    int x;
    // Ввод кода от пользователя
    while (true) {
        cout << "Введите год: ";
        if (cin >> x && x > 0) {
            break; // Ввод корректен, выходим из цикла
        } else {
            cout << "Ошибка! Введите положительное целое число.";
            cin.clear(); // Сбрасываем флаг ошибки
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очищаем буфер ввода
        }
    }
    
    // Проверка на високосный год
    if ((x%4==0 & x%100!=0) | x%400==0){
        cout<<x<<"- високосный год";
    }else {
        cout<<x<<"-не високосный год";
    }
    return 0;
    
}
 