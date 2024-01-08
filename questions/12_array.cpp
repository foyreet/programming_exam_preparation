/*
 Array - это контейнер
 size() - размер array
 at(index) - возвращает элемент по индексу index
 front() - возвращает 1 -ый элемент
 back() - возвращает последний элемент
 fill(n) - присваивает всем элементам контейнера значение n
 Объекту array мы можем присвоить значения другого массива
 Можем сравнивать два контейнера array
 */
#include <iostream>
#include <array>
int main() {
    const int size = 5;
    std::array<int, size> numbers {1, 2, 3, 7, 8}; //
    std::array numbers1 {1, 5, 7, 3, 6}; // c c++17 можно так писать
    std::array numbers2 = numbers1;
    std::cout << numbers[3] << '\n';
    std::cout << numbers.size() << '\n';
    std::cout << numbers.at(2) << '\n';
    std::cout << numbers.front() << '\n';
    std::cout << numbers.back() << '\n';
    for (int i{0}; i < numbers1.size(); i++) {
        std::cout << numbers2[i] << " ";
    }
    std::cout << '\n';
    std::cout << std::boolalpha
}
