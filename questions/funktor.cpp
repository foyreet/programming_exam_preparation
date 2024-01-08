#include <iostream>
class People {
std::string name_;
public:
    People(const char* name) : name_(name) {}
    void operator()() {std::cout << "Hello " << name_ << std::endl;};
};

int main() {
    People people_1("Grisha");
    people_1();
}