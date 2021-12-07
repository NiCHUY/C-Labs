#ifndef UNTITLED12_Stack_H
#define UNTITLED12_Stack_H

#include <cstdint>
#include "ostream"

class Stack {
public:
    Stack();

    void Push(int value);

    size_t Size() const;

    int Top() const;

    int Pop();

    void Print_stack();

    friend std::ostream operator<<(std::ostream &stream, const Stack &stack);

    std::string ToString() const;

private:
    void Enlarge();

    size_t size_{0};
    size_t capacity_;
    int *values_;
};

#endif //STACK_H_
