/*
 Контейнер
 - содержит свои элементы
 - является регулярным типом (если элементы регулярного типа)
 - предоставляет доступ к элементам
 Свойства:
 1) элемент принадлежит не более чем 1-ому контейнеру(семантика значений)
 - контейнеры не пересекаются
 - ограничение на объекты, а не на значения
 2) время жизни элемента не превышает время жизни контейнера
 - создаётся не раньше
 - уничтожается не позже
 Иерархия концепций контейнеров
 - контейнер произвольного доступа
 - реверсивный контейнер
 - однонаправленный контейнер
 - контейнер(итератор ввода)

Примеры контейнеров:
 vector, set, map, deque, stack, queue

 Итераторы
 Итераторы имеют только контейнеры

 */
/*
 * Функция begin() возвращает итератор, который указывает на первый элемент контейнера (при наличии в контейнере элементов).
 * Функция end() возвращает итератор, который указывает на следующую позицию после последнего элемента, то есть по сути на конец контейнера.
 */
#include <iostream>
#include <vector>
int main() {
    std::vector<int> v {1,2,3};
    std::vector<int>::iterator iter = v.begin(); // получили итератор
    // получение элемента на который указывает итератор
    std::cout << *iter << '\n'; // указание на 1 - ый элемент итератора vector
    std::cout << *(iter + 2) << '\n';
    *iter = 56;
    std::cout << v[0] << '\n';
    // Перебор контейнера
    for (iter; iter != v.end(); iter++) {
        std::cout << *iter << ' ';
    }
    std::cout << "\n";
    // Константные итераторы(позволяют считывать элементы, но не изменять их)
    const std::vector<int> numbers1{5,6,3,5};
    std::vector<int>::const_iterator iter1 = numbers1.begin();
    for (iter1; iter1 != numbers1.end(); iter1++) {
        std::cout << *iter1 << ' ';
    }
    std::cout << "\n";
    // Можно использовать cbegin() , cend() для получения константного итератора
    std::vector<int> numbers2 { 1, 2, 3, 4, 5 };
    for (auto iter2 {numbers2.cbegin()}; iter2 != numbers2.cend(); ++iter2)
    {
        std::cout << *iter2 << ' ';
    }
    std::cout << "\n";
    // Для типов std::set и std::map доступны только константные итераторы
    /* Реверсивные итераторы(позволяют перебирать элементы контейнера в обратном порядке)
    Функции rbegin() and rend(). Итератор представляет тип reverse_iterator
    */
    std::vector<int> numbers3{4,6,2,6,3};
    std::vector<int>::reverse_iterator iter3 = numbers3.rbegin();
    for (iter3; iter3 != numbers3.rend(); iter3++) {
        std::cout << *iter3 << ' ';
    }
    std::cout << "\n";
    /*Константный реверсивный итератор
     Позволяет перебирать элементы контейнера в обратном порядке, но изменить элементы мы не сможем
     function: crbegin() and crend()
     type iterator: const_reverse_iterator
     */
    std::vector<int> numbers4{4,8,7,2,4};
    std::vector<int>::const_reverse_iterator iter4 = numbers4.crbegin();
    for (iter4; iter4 != numbers4.crend(); iter4++) {
        std::cout << *iter4 << ' ';
    }
    std::cout << "\n";
    /*Итераторы для массивов
     function: begin() and end()
    */

    int array[]{2,5,5,6,7};
    auto iter5 = std::begin(array); // итератор на начало массива
    auto end = std::end(array); // итератор на конец массива
    std::cout << *iter5 << ' ';
    std::cout << '\n';
    // Перебор массива с помощью итератора
    for(iter5; iter5 != end; iter5++)
    {
        std::cout << *iter5 << ' ';
    }
}
