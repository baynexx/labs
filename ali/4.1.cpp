#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <locale>

using namespace std;

// Функция для проверки, является ли символ гласной буквой (и кириллица, и латиница)
bool is_vowel(wchar_t c) {
    c = tolower(c); // Приводим к нижнему регистру
    
    // Латинские гласные
    if ((c >= 'a' && c <= 'z') && 
        (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')) {
        return true;
    }
    
    // Кириллические гласные
    static const vector<wchar_t> cyrillic_vowels = {
        L'а', L'е', L'ё', L'и', L'о', L'у', L'ы', L'э', L'ю', L'я'
    };
    
    for (wchar_t vowel : cyrillic_vowels) {
        if (c == vowel) {
            return true;
        }
    }
    
    return false;
}

int main() {
    // Устанавливаем локаль для поддержки кириллицы
    setlocale(LC_ALL, "");
    wcout.imbue(locale(""));
    wcin.imbue(locale(""));

    wstring text;
    wcout << L"Введите текст: ";
    getline(wcin, text); // Читаем одну строку

    if (text.empty()) {
        wcout << L"Ошибка: текст не был введен.\n";
        return 1;
    }

    int vowel_start_count = 0;
    bool in_word = false;
    bool word_starts_with_vowel = false;

    for (wchar_t c : text) {
        bool is_letter = iswalpha(c);
        
        if (is_letter && !in_word) {
            // Начало нового слова
            in_word = true;
            word_starts_with_vowel = is_vowel(c);
        } else if (!is_letter && in_word) {
            // Конец слова
            in_word = false;
            if (word_starts_with_vowel) {
                vowel_start_count++;
            }
        }
    }

    // Проверяем последнее слово в тексте
    if (in_word && word_starts_with_vowel) {
        vowel_start_count++;
    }

    wcout << L"Количество слов, начинающихся с гласной буквы: " << vowel_start_count << endl;

    return 0;
}