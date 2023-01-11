#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str;
	std::cout << str;

        // Verify
        assert(str == "");
    }

    std::cout << "Done testing default_ctor" << std::endl;
    return 0;
}
