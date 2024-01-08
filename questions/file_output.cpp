#include <iostream>
#include <fstream>

using namespace std;

int main() {
    std::ifstream inputFile("/Users/m.a.erdyakov/Desktop/study/C++/programming-exam-preparation/questions/1-63.txt");

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            cout << line << "\n";
        }

        inputFile.close();
    } else {
        std::cout << "Не удалось открыть файл" << '\n';
    }

    // std::ifstream inputFile - ввод из файла
    // std::ofstream outputFile - запись в файл
}