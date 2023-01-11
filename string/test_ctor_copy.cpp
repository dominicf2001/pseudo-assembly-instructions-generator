#include <iostream>
#include <cassert>
#include "string.hpp"

String modifyString(String str) {
  str[0] = 'a';
  return str;
}

//===========================================================================
int main () {

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello");
	String modifiedStr = modifyString(str);
	
        // Verify
        assert(str[0] != modifiedStr[0]);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str;
	String modifiedStr = modifyString(str);
	
        // Verify
        assert(str[0] != modifiedStr[0]);
    }    

    std::cout << "Done testing copy constructor" << std::endl;
    return 0;
}
