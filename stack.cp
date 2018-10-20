#include "stack.hpp"
#include <vector>
#include <stdexcept>
#include <iostream>

template <class T>
Stack<T>::Stack() {
    size = 0;
}

template <class T>
void Stack<T>::push(const T& data) {
    v_stack.push_back(data);
    ++size;
}

template <class T>
void Stack<T>::pop() {
    if (size < 1) 
        throw std::underflow_error("Can't pop from empty stack.");
    else v_stack.pop_back();
}

template <class T>
T Stack<T>::top() const {
    return v_stack.back();
}

template <class T>
int Stack<T>::size_of() const {
    return size;
}

template <class T>
void Stack<T>::print_stack() const {
    for (int i = 0; i < size-1; ++i) {
        std::cout << v_stack[i] << std::endl;
    }
}

template <class T>
bool Stack<T>::empty() const {
    if (size < 1) return true;
    else return false;
}
