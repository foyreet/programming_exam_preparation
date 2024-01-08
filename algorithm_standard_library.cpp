#include <algorithm> // заголовочный файл algorithm
#include <iostream>
#include <vector>
#include <string>
int main() {
    std::vector<int> v = {1, 2, 34, 5, 1, 1};
    std::cout << std::count(v.begin(), v.end(), 1) << '\n'; // подсчёт количества элемента 1 в векторе
    auto iter = std::find(v.begin(), v.end(), 34); // номер индекса в векторе
    std::cout << iter - v.begin() << '\n';
    std::string s = "Grisha";
    std::reverse(s.begin(), s.end()); // переворачивает строку
    std::cout << s << '\n';
    auto iter1 = std::unique(v.begin(), v.end());
    std::cout << *iter1 << '\n';

}
