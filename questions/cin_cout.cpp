#include <iostream>
#include <iomanip> // для использования манипуляторов форматирования
int main() {
    int n = 8;
    char ch;
    const int bufferSize = 6;
    char buffer[bufferSize];
    double pi = 5.6735435;
//    ch = std::cin.get(); // неформатированный ввод читает 1 символ из потока
//    std::cin.read(buffer, bufferSize);
//    std::cout << "Форматированный вывод метод setw: " <<std::setw(10) << a << '\n'; // устанавливает ширину поля вывода
//    std::cout << "Форматированный вывод метод setprecision: " << std::setprecision(3) << pi << '\n'; // устанавливает точность вывода
//    std::cout <<"Неформатированный ввод get: "<< ch << std::endl;
//    std::cout <<"Неформатированный ввод read: " <<  buffer << '\n';
//    std::cout.put(ch) <<" Неформатированный вывод put" << '\n';
//    std::cout.write(buffer, sizeof(buffer) - 1) << " Неформатированный вывод write" << '\n';
//    std::cout << "Number: " << n << " and index  " << std::endl;
//    printf("Number:  %d and index %d",n,i); // %d - целое %f - дробное %s - строка %с - char

    double a[] = {1.12212, 2.123213, 3.129213, 4.123213, 5.123123};
    int precision;
    scanf("%d", &precision);
    for (int i = 0; i < sizeof(a) / sizeof(double); i++) {
        printf("index:[%d] element with precision:[%.*f] element without precision: [%f]\n", i, precision, a[i], a[i]);
        std::cout << "index: " << i << " element with precision: " << std::setprecision(3) << a[i] << '\n';
        std::cout << "index: " << i << " element without precision: " << std::defaultfloat a[i] << '\n';
    }
}