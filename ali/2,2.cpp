#include <iostream>
#include <ctime>
using namespace std;

int main() {        
    double b[10], C;                 
    int count = 0;
    double *p = b; 
    srand(time(0));
    cout<<"Результаты соревнований : ";
    for (int i=0; i<10; i++){
        *(p+i)=(rand()%100+50)*2.9;
        cout<<*(p+i)<<" ";
    }
    cout<<"\n";
    cout << "Введите число C: ";
    cin >> C;

    for (int i = 0; i < 10; ++i) {
        if (*(p + i) > C) {
            ++count;
        }
    }

    cout << "Количество элементов массива, больших " << C << ": " << count;
    
    return 0;
}
