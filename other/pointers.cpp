#include <iostream>


int main() {
    int x = 2;
    int y = x; // copy of x
    int &z = x; // alias for x

    // &x gets the memory location of x
    int* a = &x; // pointer to the memory address of x

    std::cout << "memory addresses:\n";

    std::cout << "x: " << &x << '\n';
    // address: C1, value: 2

    std::cout << "y: " << &y << '\n';
    // address: 8A, value: 2

    std::cout << "z: " << &z << '\n';
    // address: C1, value: 2

    // A pointer's value stores a memory location
    std::cout << "a: " << &a << '\n';
    // address: 4D, value: C1

    std::cout << '\n';

    // The value of a - the memory address of x
    std::cout << "a-value - the pointer to memory address: " << a << '\n';

    // Get the value stored in the memory address
    std::cout << "a-pointer-value: " << *a << '\n';
    
    return 0;
}