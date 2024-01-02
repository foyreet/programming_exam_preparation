/*

 */
#include <iostream>
class C{
public:
    double re = 0.0;
    double im = 0.0;
    class CC{
    public:
        int y = 4;
    };
    void sum(const int a, const int b) {
        std::cout << a + b;
    }
    // Перегрузка функций одно имя разный набор аргументов
    int max(const int x, const int y);
    double max(const double x, const double y);
    // Операторная функция(Продолжить)

};
int main() {
    const int a = 2;
    const int b = 5;
    C c;
    C::CC cc; // обращение к вложенному классу СС
    std::cout << c.re << '\n';
    std::cout << cc.y << '\n';
    c.sum(2,3);
};
