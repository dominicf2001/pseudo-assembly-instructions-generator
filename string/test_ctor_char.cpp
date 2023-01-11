#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str('H');
	std::cout << str;

        // Verify
        assert(str == 'H');
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str('\0');
	std::cout << str;

        // Verify
        assert(str == "");
    }
    
    std::cout << "Done testing char constructor" << std::endl;
    return 0;
}
