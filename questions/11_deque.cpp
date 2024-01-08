/*
 Дэк - это двусторонняя очередь. Дэк - это контейнер
 front() - возвращает 1 - ый элемент
 back() - возвращает последний элемент
 [index] - возвращает элемент по индексу
 at(index) - возвращает элемент по индексу с проверкой выхода за границы deque
 */
#include <iostream>
#include <deque>
int main() {
    std::deque<int> deque1{1, 2, 3, 6, 7, 8};
    std::cout << deque1.front() << '\n';
    std::cout << deque1.back() << '\n';
    std::cout << deque1[3] << '\n';
    std::cout << deque1.at(2) << '\n';
}