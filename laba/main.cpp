#include "abonents.h"
#include <iostream>

int main() {
    std::vector<StudentRecord> records;
    int N;
    
    std::cout << "Введите количество студентов в группе: ";
    std::cin >> N;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    // Создание записей
    createRecords(records, N);
    printRecords(records);
    
    // Корректировка оценок
    adjustGrades(records);
    printRecords(records);
    
    // Сохранение в файл
    saveToFile(records, "session_results.txt");
    
    // Работа с файлами (часть 2 задания)
    filterFileBySubstring("F.txt", "G.txt");
    
    return 0;
}