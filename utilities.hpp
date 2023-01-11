#ifndef CS2_UTILITIES_HPP_
#define CS2_UTILITIES_HPP_

#include "../string/string.hpp"
#include <fstream>

String infixToPostfix(const String&);

String infixToPrefix(const String&);

String postfixToAssembly(const String&);

String postfixToAssembly(const String&, std::ofstream&);

String evaluate(const String&, const String&, const String&, int);

#endif // CS2_UTILITIES_HPP_
