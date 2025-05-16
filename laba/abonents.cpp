#include "abonents.h"
#include <limits>

void createRecords(std::vector<StudentRecord>& records, int N) {
    records.resize(N);
    for (int i = 0; i < N; ++i) {
        std::cout << "\nСтудент #" << i + 1 << ":\n";
        std::cout << "ФИО: ";
        std::getline(std::cin, records[i].fullName);
        
        std::cout << "Предмет: ";
        std::getline(std::cin, records[i].subject);
        
        while (true) {
            std::cout << "Оценка (2-5): ";
            std::cin >> records[i].grade;
            if (records[i].grade >= 2 && records[i].grade <= 5) {
                break;
            }
            std::cout << "Ошибка! Оценка должна быть от 2 до 5.\n";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void printRecords(const std::vector<StudentRecord>& records) {
    std::cout << "\nВедомость результатов сессии:\n";
    std::cout << "----------------------------------------\n";
    std::cout << "ФИО\t\tПредмет\tОценка\n";
    std::cout << "----------------------------------------\n";
    
    for (const auto& student : records) {
        std::cout << student.fullName << "\t" 
                  << student.subject << "\t" 
                  << student.grade << std::endl;
    }
    std::cout << "----------------------------------------\n";
}

void adjustGrades(std::vector<StudentRecord>& records) {
    std::cout << "\nКорректировка оценок для 3 студентов:\n";
    
    for (int i = 0; i < 3; ++i) {
        std::string name;
        std::cout << "\nВведите ФИО студента #" << i + 1 << ": ";
        std::getline(std::cin, name);
        
        bool found = false;
        for (auto& student : records) {
            if (student.fullName == name) {
                found = true;
                std::cout << "Текущая оценка по " << student.subject << ": " << student.grade << std::endl;
                
                while (true) {
                    std::cout << "Новая оценка (2-5): ";
                    std::cin >> student.grade;
                    if (student.grade >= 2 && student.grade <= 5) {
                        break;
                    }
                    std::cout << "Ошибка! Оценка должна быть от 2 до 5.\n";
                }
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Оценка обновлена!\n";
                break;
            }
        }
        
        if (!found) {
            std::cout << "Студент не найден!\n";
            i--; // Повторить попытку для этого студента
        }
    }
}

void saveToFile(const std::vector<StudentRecord>& records, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Ошибка открытия файла для записи!\n";
        return;
    }
    
    for (const auto& student : records) {
        outFile << student.fullName << "|" << student.subject << "|" << student.grade << "\n";
    }
    
    outFile.close();
    std::cout << "Данные сохранены в файл " << filename << std::endl;
}

void loadFromFile(std::vector<StudentRecord>& records, const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Ошибка открытия файла для чтения!\n";
        return;
    }
    
    records.clear();
    std::string line;
    while (std::getline(inFile, line)) {
        size_t pos1 = line.find('|');
        size_t pos2 = line.find('|', pos1 + 1);
        
        if (pos1 != std::string::npos && pos2 != std::string::npos) {
            StudentRecord student;
            student.fullName = line.substr(0, pos1);
            student.subject = line.substr(pos1 + 1, pos2 - pos1 - 1);
            student.grade = std::stoi(line.substr(pos2 + 1));
            records.push_back(student);
        }
    }
    
    inFile.close();
    std::cout << "Данные загружены из файла " << filename << std::endl;
}

void filterFileBySubstring(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inFile(inputFile);
    std::ofstream outFile(outputFile);
    
    if (!inFile || !outFile) {
        std::cerr << "Ошибка открытия файлов!\n";
        return;
    }
    
    std::string S;
    bool foundInG = false;
    
    do {
        std::cout << "\nВведите подстроку для поиска (или 'exit' для выхода): ";
        std::getline(std::cin, S);
        
        if (S == "exit") break;
        
        inFile.clear();
        inFile.seekg(0);
        outFile.clear();
        outFile.seekp(0);
        foundInG = false;
        
        std::string line;
        while (std::getline(inFile, line)) {
            if (line.find(S) != std::string::npos) {
                outFile << line << "\n";
                foundInG = true;
            }
        }
        
        if (!foundInG) {
            std::cout << "Подстрока '" << S << "' не найдена в файле " << inputFile << std::endl;
            
            std::cout << "1. Повторить ввод\n2. Выйти\nВыберите действие: ";
            int choice;
            std::cin >> choice;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
            if (choice == 2) break;
        } else {
            std::cout << "Файл " << outputFile << " создан со строками, содержащими '" << S << "'" << std::endl;
            
            // Проверка наличия подстроки в выходном файле
            outFile.close();
            std::ifstream checkFile(outputFile);
            bool existsInOutput = false;
            
            while (std::getline(checkFile, line)) {
                if (line.find(S) != std::string::npos) {
                    existsInOutput = true;
                    break;
                }
            }
            
            if (!existsInOutput) {
                std::cout << "Ошибка: подстрока не найдена в файле " << outputFile << "!" << std::endl;
            } else {
                std::cout << "Проверка: подстрока найдена в файле " << outputFile << std::endl;
                break;
            }
        }
    } while (true);
    
    inFile.close();
    outFile.close();
}