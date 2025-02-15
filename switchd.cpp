#include <iostream>
#include <string>

using namespace std;

int main() {
    int number; // Global variable
    cout << "введите номер" << endl;
    cin >> number;
    string result = (number > 0) ? "Число положительное" : "Число отрицательное";
    cout << result << endl;
    return 0;
}