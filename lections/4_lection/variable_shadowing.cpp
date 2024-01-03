// Cмотри lection_cpp/6 pointers/pointers.cpp
// и lection_cpp/7 memory/memory.cpp + lection_cpp/8 memory/memory.cpp
#include <iostream>
//using namespace std;
//using std::cout;
// using Псевдоним типа (Рекомендуется их использовать)
using Vec = std::vector<int>;
int z = 6;
/* Создание пространства имён
 Ограничение видимости для компоновщика
 */
namespace count {
    int x = 7;
    int y = 9;
}
int main() {
    std::cout << count::x << '\n';
    // std::filesystem::path Что это?
    std::cout << z << '\n';
    Vec v;
    //Сокрытие имён
    ::z = 3; // Присвоили глобальной переменной значение 3
    std::cout << "::z " << z << '\n';
    int z(0); // Сокрыло значение глобальной переменной
    std::cout <<"z(0) " << z << '\n';

}