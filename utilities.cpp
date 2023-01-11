#include "../string/string.hpp"
#include "stack.hpp"
#include <vector>
#include <iostream>
#include <fstream>

String infixToPostfix(const String& expr) {
    stack<String> result;
    std::vector<String> tokens = expr.split(' ');
    int i = 0;
    while (tokens[i] != ';') {
        if (tokens[i] == ')') {
            String right = result.pop();
            String opr = result.pop();
            String left  = result.pop();
            result.push(left + ' ' + right + ' ' + opr);
        } else if (tokens[i] != '(') {
            result.push(tokens[i]);
        }
        ++i;
    }
    return result.top();
}

String evaluate(const String& left, const String& opr, const String& right, int tmpCount) {
    String cnt(tmpCount);
    String tmp = "TMP" + cnt;
    std::cout << "   LD    " << left << std::endl;
    
    if (opr == '+')
        std::cout << "   AD    " << right << std::endl;
    else if (opr == '-')
        std::cout << "   SB    " << right << std::endl;
    else if (opr == '*')
        std::cout << "   MU    " << right << std::endl;
    else if (opr == '/')
        std::cout << "   DV    " << right << std::endl;
    
    std::cout << "   ST    " << tmp << std::endl;        
    return tmp;
}

String evaluate(const String& left, const String& opr, const String& right, int tmpCount, std::ofstream& out) {
    String cnt(tmpCount);
    String tmp = "TMP" + cnt;
    out << "   LD    " << left << std::endl;
    
    if (opr == '+')
        out << "   AD    " << right << std::endl;
    else if (opr == '-')
        out << "   SB    " << right << std::endl;
    else if (opr == '*')
        out << "   MU    " << right << std::endl;
    else if (opr == '/')
        out << "   DV    " << right << std::endl;
    
    out << "   ST    " << tmp << std::endl;        
    return tmp;
}

String infixToPrefix(const String& expr) {
    stack<String> result;
    std::vector<String> tokens = expr.split(' ');
    int i = 0;
    while (tokens[i] != ';') {
        if (tokens[i] == ')') {
            String right = result.pop();
            String opr = result.pop();
            String left  = result.pop();
            result.push(opr + ' ' + left + ' ' + right);
        } else if (tokens[i] != '(') 
            result.push(tokens[i]);
        ++i;
    }
    return result.top();
}

String postfixToAssembly(const String& expr) {
    stack<String> result;
    std::vector<String> tokens = expr.split(' ');
    int tmpCount = 1;
    for (std::vector<String>::iterator itr = tokens.begin(); itr != tokens.end(); ++itr) {
        String token = *itr;
        if (token == '+' || token == '-' || token == '*' || token == '/') {
            String right = result.pop();
            String left = result.pop();
            result.push(evaluate(left, token, right, tmpCount));
            ++tmpCount;
        } else 
            result.push(token);
    }
    return result.top();
}

String postfixToAssembly(const String& expr, std::ofstream& out) {
    stack<String> result;
    std::vector<String> tokens = expr.split(' ');
    int tmpCount = 1;
    for (std::vector<String>::iterator itr = tokens.begin(); itr != tokens.end(); ++itr) {
        String token = *itr;
        if (token == '+' || token == '-' || token == '*' || token == '/') {
            String right = result.pop();
            String left = result.pop();
            result.push(evaluate(left, token, right, tmpCount, out));
            ++tmpCount;
        } else 
            result.push(token);
    }
    return result.top();
}


