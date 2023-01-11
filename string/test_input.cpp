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
	std::cout << "Input string for testing: " << std::endl << std::flush;
	std::cin >> str;
        // Verify
	
	std::cout << "Result: " << str << std::endl << std::endl << std::flush;
    }

    std::cout << "Done testing input" << std::endl;
    return 0;
}
