// Ввести х, вычислить у.
// Автор : Умашев Али ВПР12
// Дата : 13.02.25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    int y;
    cout << "Введите x: ";
    cin >> x;
    if (x < -2) {
        y = (sin(6*pow(x, 3)))/ (4*x-pow(x,4));
    } else if (-2 <= x < 3) {
        if (x !=0)
            y = (2*log(x-1) - pow(exp(1), x))/(8*x + pow(x, 2));
        else
            cout << "x = 0 ";
    } else if (x>=3){
        y = (2*pow(x, 3) + 4)/((5*pow(x, 2) - 2) * tan(2*x + 1));
    }
    cout << y;
    return 0;
}
