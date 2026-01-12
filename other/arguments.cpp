#include <iostream>
// By default, cpp passes by value
// Except for arrays: they decay into pointers

void printIntByValue(int a);
void printIntByReference(int &a);
void printIntByPointer(int a);

int main() {
    int x = 10;
    std::cout << "x is: " << x << '\n';
    printIntByValue(x);
    std::cout << "ran printIntByValue: " << x << '\n';
    printIntByReference(x);
    std::cout << "ran printIntByReference: " << x << '\n';

    return 0;
}

// Passing by value
void printIntByValue(int a) {
    // Increment a
    a++;
    std::cout << "Incremented: " << a << '\n';
}

// Passing by pointer
void printIntByPointer(int a) {

} 

// Passing by reference
// A reference is like an alias for a variable

void printIntByReference(int &a) {
    // Increment a
    a++;
    std::cout << "Incremented: " << a << '\n';
}