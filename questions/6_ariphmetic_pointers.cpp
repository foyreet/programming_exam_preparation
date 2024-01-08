#include <iostream>
int main() {
    int n{5};
    int *pn = &n;
    std::cout << pn << '\n';
    pn++;
    std::cout << pn << '\n';
}
// Увеличение адреса на sizeof(int) * x;
