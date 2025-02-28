#include <iostream>
#include <vector>
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
    srand(time(0));
    
    cout << "Сгенерированный массив: ";
    vector <int> A(n);
    for (int i = 0; i < n; ++i) {
        A[i] = rand() % 100-50;  
        cout << A[i] << " ";
    }
    cout << endl;

    // 1
    
    int m = -1;
    for (int i = 0; i < n; ++i) {
        if (A[i] > A[m]) {
            m = i;
        }
    }
    cout << "Номер максимального элемента: " << m << endl;

    // 2
    
    int z1=-1, z2=-1;
    for (int i=0; i < n; ++i) {
        if (A[i] == 0) {
            if (z1 == -1) {
                z1 = i;
            } else {
                z2 = i;
                break;
            }
        }
    }

    if (z1 != -1 && z2 != -1 && z2 > z1 + 1) {
        int p = 1;
        for (int i = z1 + 1; i < z2; ++i) {
            p *= A[i];
        }
        cout << "Произведение элементов между первым и вторым нулевыми элементами: " << p << endl;
    } else {
        cout << "Нет двух нулевых элементов или они расположены рядом." << endl;
    }

    // 3
    
    cout << "Преобразованный массив: ";
    for (int i = 0; i < n; i+=2) {
        cout << A[i] << " ";
    } 
    for (int i = 1; i < n; i+=2) {
        cout << A[i] << " ";
    } 
    return 0;
}