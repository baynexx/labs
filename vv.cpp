#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x, y, a1, a2, a3;
    cout << "Введите x: ";
    cin >> x;
    a1 = (sin(pow(6*x, 3)))/ (4*x-pow(x,4));
    a2 = (2*log(x-1) - pow(exp(1), x))/(8*x + pow(x, 2));
    a3 = (2*pow(x, 3) + 4)/((5*pow(x, 2) - 2) * tan(2*x + 1));
    if (x < -2) {
        y = a1;
    } else if (-2 <= x < 3) {
        y = a2;
    } else if (x>=3){
        y = a3;
    }
    return 0;
}



