#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::cout;
int main() {
    for (int i(0); i < 256; i += 1) {
    }
    const auto x = 5;
    std::cout << x << '\n';
    // Цикл по диапазону(итерирование элементов последовательности)
    std::vector<int> a = {2, 3, 4, 5};
    for (const int& v : a) {
        std::cout << v << ' ';
    }

    std::cout << "" << std::endl;
    char ch = 'a';
    std::cout << static_cast<int>(ch); // приведение типа char к int
    std::cout << "" << std::endl;

    string str1("misis");
    string str(str1); // копирование строки
    std::cout << str1 << '\n';
    std::cout << str << '\n';
    std::string str2(4, 'a');
    std::cout << str2 << '\n';
    // Присвоение строке
    string strFI;
    strFI.assign("Grisha");
    // strFI = "Grisha";
    cout << strFI << '\n';

    // Присоединение к строке
    strFI.append("_Misha");
    // strFI += "Misha";
    cout << strFI << '\n';

    // Конкатенация строк
    strFI = string("134") + string("abcd");
    cout << strFI << '\n';

    // Остановился на 27 слайде

}
