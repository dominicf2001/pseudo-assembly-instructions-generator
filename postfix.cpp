#include "stack.hpp"
#include "utilities.hpp"
#include "../string/string.hpp"
#include <iostream>
#include <fstream>

int main (int argc, char *argv[]) {
    if (argc != 2 && argc != 3) {
        std::cerr << "Invalid number of arguments" << std::endl;
    }
    
    
    std::ifstream in(argv[1]);
    if (!in) {
        std::cerr << "Error: can not open " << argv[1] << std::endl;
        exit(2);
    }
    
    if (argc == 2) {
        char charArr[300];
        while(in.getline(charArr, 300)) {
            String line(charArr);
            std::cout << infixToPostfix(line) << std::endl;
        }
    } else if (argc == 3) {
        char charArr[300];
        std::ofstream out(argv[2]);
        while(in.getline(charArr, 300)) {
            String line(charArr);
            out << infixToPostfix(line) << std::endl;
        }
    }

}
