#include <iostream>

int main() {

    std::string intended;
    std::cin >> intended;

    std::string actual;
    std::cin >> actual;

    int intended_len = intended.length();
    int actual_len = intended.length();

    int actual_index_shift = 0; // num to add to actual index to get the intended index (in case quiet key is pressed before the silly key)

    for (int i = 0; i < intended_len; i++) {
        char intended_char = intended[i];
        char actual_char = actual[i + actual_index_shift];

        if (intended_char != actual_char) {

            
            


        }

    }
    

    return 0;
}