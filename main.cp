/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "stack.hpp"
#include <iostream>

int main()
{
    Stack<int> new_stack;
    new_stack.push(1);
    new_stack.push(8);
    new_stack.push(9);
    new_stack.push(3);
    new_stack.push(5);
    new_stack.pop();
    new_stack.pop();
    new_stack.print_stack();
    new_stack.pop();
    std::cout << new_stack.empty() << std::endl;
    std::cout << new_stack.top() << std::endl;
    std::cout << new_stack.size_of() << std::endl;
    new_stack.print_stack();
        

    return 0;
}
