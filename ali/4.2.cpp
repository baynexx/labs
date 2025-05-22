#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << "Введите текст: ";
    string s;
    getline(cin, s);
    
    vector<double> nums;
    string num;
    bool in_num = false;
    
    for (char c : s) {
        if (isdigit(c) || c == '.' || c == ',' || c == '-' || c == '+') {
            num += c == ',' ? '.' : c;
            in_num = true;
        } else if (in_num) {
            nums.push_back(stod(num));
            num.clear();
            in_num = false;
        }
    }
    
    if (in_num) nums.push_back(stod(num));
    
    cout << "Найденные числа:\n";
    for (double n : nums) cout << n << '\n';
    
    return 0;
}