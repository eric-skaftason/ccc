#include <iostream>

// A reference is an alias for a variable
// It cannot reference null

int main() {
    int a = 2;
    int &b = a; // make b refer to a

    int c = a; // make a copy of a and store in c

    std::cout << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    a = 3;
    std::cout << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    b = 4;
    std::cout << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';

    std::cout << "\nmemory locations\n";
    std::cout << &a << '\n';
    std::cout << &b << '\n';
    std::cout << &c << '\n';

    return 0;
}