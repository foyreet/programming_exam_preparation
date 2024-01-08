#include <iostream>
#include <limits>

int сумма(int число_1, int число_2) {
    return число_1 + число_2;
}

int main() {
    using std::cout;
//    cout << "char: " << (int)std::numeric_limits<char>::min() << " to " << (int)std::numeric_limits<char>::max() << std::endl;
//    cout << "short: " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
//    cout << "int: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
//    cout << "long: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
//    cout << "long long: " << std::numeric_limits<long long>::min() << " to " << std::numeric_limits<long long>::max() << std::endl;

    //
    std::string str = "\u0009";
    cout << str << std::endl;
    int привет = 12;
    cout << сумма(1, 2) << " ✍";

//    cout << str << std::endl;

//    for (int i = -128; i < 128; i++) {
//        printf("%d - [%c]\n", i, i);
//    }

    return 0;
}
