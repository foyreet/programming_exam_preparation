//
// Created by Mikhail Erdyakov on 03.01.2024.
//

#include <iostream>

// "Misha" -> 498
// "iMsha" -> 498
long long hash(std::string s) {
    const int k = 31;
    const int mod = 1e9 + 7;

    long long hash_code = 0;
    long long m = 1;

    for (char c : s) {
        int alphabet_position = static_cast<int>(c - 'a' + 10);
        hash_code = (hash_code + m * alphabet_position) % mod;
        m = (m * k) % mod;
    }

    return hash_code;
}

int main() {

    std::string name_1 = "Misha";
    std::string name_2 = "Grisha";

    std::string name_3 = "iMsha";
    std::cout << hash(name_1) << std::endl;
    std::cout << hash(name_1) << std::endl;
    std::cout << hash(name_2) << std::endl;
    std::cout << hash(name_3) << std::endl;

    return 0;
}
