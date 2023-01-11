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
            std::cout << "Infix Expression: " << line << std::endl;
            std::cout << "Prefix Expression: " << infixToPrefix(line) << std::endl;
            std::cout << "Postfix Expression: " << infixToPostfix(line) << std::endl;
            postfixToAssembly(infixToPostfix(line));
        }
    } else if (argc == 3) {
        std::ofstream out(argv[2]);
        char charArr[300];
        while(in.getline(charArr, 300)) {
            String line(charArr);
            out << "Infix Expression: " << infixToPostfix(line) << std::endl;
            out << "Postfix Expression: " << infixToPrefix(line) << std::endl;
            postfixToAssembly(infixToPostfix(line), out);
        }
    }
}
