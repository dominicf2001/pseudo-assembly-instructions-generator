#include "string.hpp"
#include <iostream>
#include <vector>

String::String() {
  stringSize = 1;
  str = new char[stringSize];
  str[0] = 0;
}

String::String(int n) {
    String temp;
    if (n == 0) temp = '0';

    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        char digitChar = '0' + digit;
        temp += digitChar;
    }
    stringSize = temp.stringSize;
    str = new char[stringSize];
    for (int i = 0; i < temp.length(); ++i) {
        str[i] = temp[(temp.length() - 1) - i];
    }
    str[stringSize - 1] = 0;
}

String::String(char c) {
  stringSize = (c == '\0') ? 1 : 2;
  str = new char[stringSize];
  if (c != '\0') {
    str[0] = c;
    str[1] = 0;
  } else {
    str[0] = 0;
  }
}

// REQUIRES: cStr to be null terminating
String::String(const char cStr[]) {
  stringSize = 0;
  while (cStr[stringSize] != 0) {
    ++stringSize;
  }
  str = new char[++stringSize];
  for (int i = 0; i < stringSize; ++i) {
    str[i] = cStr[i];
  }
  
}

String::String(const String& org) {
  stringSize = org.length() + 1;
  str = new char[stringSize];
  for (int i = 0; i <= org.length(); ++i)
    str[i] = org[i];
}

String::~String() {
  delete [] str;
}

void String::swap(String& rhs) {
  char *tempPtr = str;
  str = rhs.str;
  rhs.str = tempPtr;
  
  int tempVar = stringSize;
  stringSize = rhs.stringSize;
  rhs.stringSize = tempVar;
}

String& String::operator=(String rhs) {
  swap(rhs);
  return *this;
}

int String::length() const {
  return stringSize - 1;
}

int String::capacity() const {
  return stringSize - 1;
}

String operator+(String lhs, const String& rhs) { return lhs += rhs; }

String& String::operator+=(const String& rhs) {
  int offset = length();
  stringSize = length() + rhs.length() + 1;
  char *temp = new char[stringSize];
  for (int i = 0; i < stringSize; ++i) {
    if (i < offset) {
      temp[i] = str[i];
    }
    else temp[i] = rhs[i - offset];
  }
  delete [] str;
  str = temp;
  return *this;
}

bool String::operator==(const String& rhs) const {
  if (length() != rhs.length()) return false;
  int i = 0;
  while (rhs[i] != 0) {
    if (str[i] != rhs[i]) return false;
    ++i;
  }
  return true;
}
bool operator==(const char lhs[], const String& rhs) { return rhs == String(lhs); };
bool operator==(char lhs, const String& rhs) { return rhs == String(lhs); }

bool String::operator<(const String& rhs) const {
  int shortestLength = (length() <= rhs.length()) ? length() : rhs.length();
  for (int i = 0; i < shortestLength; ++i) {
    if (str[i] > rhs[i]) return false;
    if (str[i] < rhs[i]) return true;  
  }
  return (length() < rhs.length());
}
bool operator<(const char lhs[], const String& rhs) { return String(lhs) < rhs; }
bool operator<(char lhs, const String& rhs) { return String(lhs) < rhs; }

bool operator>(const String& lhs, const String& rhs) { return rhs < lhs; }

bool operator<=(const String& lhs, const String& rhs) { return (lhs < rhs) || (lhs == rhs); }

bool operator>=(const String& lhs, const String& rhs) { return rhs <= lhs; }

bool operator!=(const String& lhs, const String& rhs) { return !(lhs == rhs); }

// REQUIRES: 0 <= i < length()
char& String::operator[](int i) { return str[i]; }

// REQUIRES: 0 <= i < length()
char String::operator[](int i) const { return str[i]; }

// REQUIRES: 0 <= start < length() && 0 <= end < length() && start <= end
String String::substr(int start, int end) const {
  String result;
  if (start < 0) start = 0;
  if (end >= length()) end = length() - 1;
  if (end < start) return result;
  
  for (int i = start; i <= end; ++i) {
    result += str[i];
  }

  return result;
}

// REQUIRES: 0 <= start < length()
int String::findch(int start, char ch) const {
  if (start < 0) start = 0;
  if (start >= length()) start = length() - 1;
  
  for (int i = start; i < length(); ++i) 
    if (str[i] == ch) return i;
  return -1;
}

// REQUIRES: 0 <= start < length()
// ENSURES: -1 if string not found && i if string found
int String::findstr(int start, const String& string) const {
  if (start < 0) start = 0;
  if (start >= length()) start = length() - 1;
  
  for (int i = start; i < length(); ++i) {
    if (substr(i, i + string.length() - 1) == string) return i;
  }
  return -1;
}

std::ostream& operator<<(std::ostream& os, const String& rhs) {
  os << rhs.str;
  return os;
}

std::istream& operator>>(std::istream& is, String& rhs) {
  char buffer[256];
  is >> buffer;
  rhs = String(buffer);
  return is;
}


std::vector<String> String::split(char c) const {
  std::vector<String> result;
  int start = 0;
  int foundIndex = findch(start, c);
  while (foundIndex != -1 && start != length()) {
    result.push_back(substr(start, foundIndex - 1));
    start = foundIndex + 1;
    foundIndex = findch(start, c);
  }
  result.push_back(substr(start, length() - 1));
  return result;
}

int String::toInt() const {
  int result = 0;
  for (int i = 0; i < length(); ++i) {
    if (i > 0 && i == 0) continue;
    int digit = static_cast<int>(str[(length() - 1) - i]) - 48;
    int powerOfTen = 1;
    for (int j = 0; j < i; ++j)
      powerOfTen *= 10;
    result += digit * powerOfTen;
  }
  return result;
}


