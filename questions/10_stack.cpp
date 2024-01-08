#include <iostream>

class StackException {
private:
    std::string message_;
public:
    StackException(std::string message) {
        message_ = message;
    }

    std::string getMessage() const {
        return message_;
    }
};

class Stack {
private:
    int size_ = 0;
    int capacity;
    int* stack;
public:
    explicit Stack(int initialCapacity) {
        capacity = initialCapacity;
        stack = new int[capacity];
    };
    ~Stack() {
        delete[] stack;
    }

    void push(int x) {
        if (size_ == capacity) {
            capacity *= 2;
            int* newStack = new int[capacity];
            for (int i = 0; i < size_; i++) {
                newStack[i] = stack[i];
            }
            delete[] stack;

            stack = newStack;
        }
        stack[size_] = x;
        size_++;
    }

    int pop() {
        if (size_ == 0) {
            throw StackException("В стеке закончились элементы, добавьте их перед тем как доставать");
        }
        return stack[--size_];
    }

    int peek() {
        return stack[size_ - 1];
    }

    int size() {
        return size_;
    }
};

int main() {
    Stack* stack = new Stack(10);
    std::cout << "Сколько элементов в стеке после создания: " << stack->size() << std::endl;
    stack->push(12);
    stack->push(1);
    stack->push(1'000'000);
    stack->push(1'000'000'000);
    stack->push(2);
    stack->push(-8);
    stack->push(-16);
    stack->push(-16);
    stack->push(-32);
    stack->push(-64);
    stack->push(1200);
    stack->push(1000);
    std::cout << "Размер после добавления элементов: "<< stack->size() << std::endl;

    std::cout << "Посмотреть какой элемент сейчас на вершине стека, но не удалять его: " << stack->peek() << std::endl;
    std::cout << "Начинаем доставать элементы из стека: " << std::endl;
    try {
        while (stack->size() != 0) {
            std::cout << stack->pop() << " ";
        }
        std::cout << std::endl;
    } catch (const StackException& stackException) {
        std::cout << stackException.getMessage() << std::endl;
    }

    std::vector<int> v(5, 0);

    delete stack;
}