#include <iostream>

int main() {
    int dusa_size;
    std::cin >> dusa_size;

    while (true) {
        int yobi_size;
        std::cin >> yobi_size;

        if (yobi_size >= dusa_size) break;

        dusa_size += yobi_size;
    }

    std::cout << dusa_size << '\n';

    return 0;
}