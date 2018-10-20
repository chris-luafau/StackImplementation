#pragma once
#include <vector>

template <class T>
class Stack {
private:
    int size;
    std::vector<T> v_stack;
public:
    Stack();
    void push (const T& data);
    void pop();
    T top() const;
    int size_of() const;
    void print_stack() const;
    bool empty() const;
};
