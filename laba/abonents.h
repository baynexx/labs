#ifndef SESSION_H
#define SESSION_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

struct StudentRecord {
    std::string fullName;
    std::string subject;
    int grade;
};

void createRecords(std::vector<StudentRecord>& records, int N);
void printRecords(const std::vector<StudentRecord>& records);
void adjustGrades(std::vector<StudentRecord>& records);
void saveToFile(const std::vector<StudentRecord>& records, const std::string& filename);
void loadFromFile(std::vector<StudentRecord>& records, const std::string& filename);
void filterFileBySubstring(const std::string& inputFile, const std::string& outputFile);

#endif