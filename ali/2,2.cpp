#include <iostream>

using namespace std;

int main() {
    const int a = 10;         
    double b[a];              
    double C;                 
    int count = 0;            

    cout << "Введите 10 вещественных элементов массива: ";
    
    double* p = b; 
    for (int i = 0; i < a; ++i) {
        cin >> *(p + i); 
    }

    cout << "Введите число C: ";
    cin >> C;

    for (int i = 0; i < a; ++i) {
        if (*(p + i) > C) {
            ++count;
        }
    }

    cout << "Количество элементов массива, больших " << C << ": " << count;
    
    return 0;
}
