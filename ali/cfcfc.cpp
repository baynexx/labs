#include <iostream>
#include <string>
#include <sstream> // для stringstream

using namespace std;

    bool f(char c) {
    c = tolower(c);
    return string("аеёиоуыэюя").find(c) != string::npos;
}

int main() {
    cout << "Введите текст: ";
    string text;
    getline(cin, text);
    
    int count = 0;
    string word;
    stringstream ss(text); // разбиваем строку на слова
    
    while (ss >> word) { // читаем слово за словом
        if (!word.empty() && f(word[0])) {
            count++;
        }
    }
    
    cout << "Количество слов на гласную: " << count << endl;
    return 0;
}