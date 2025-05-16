#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');
}

int main() {
    string text;
    cout << "Введите текст: ";
    getline(cin, text);
    
    istringstream iss(text);
    string word;
    int count = 0;
    
    while (iss >> word) {
        if (!word.empty() && isVowel(word[0])) {
            count++;
        }
    }
    
    cout << "Количество слов, начинающихся с гласной: " << count << endl;
    
    return 0;
}