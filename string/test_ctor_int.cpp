#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str(134);

        // Verify
        assert(str == "134");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str(9);

        // Verify
        assert(str == "9");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str(0);

        // Verify
        assert(str == "0");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str(1001);
        
        // Verify
        assert(str == "1001");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test
        String str(2147483647);
        
        // Verify
        assert(str == "2147483647");
    }

    std::cout << "Done testing int constructor" << std::endl;
    return 0;
}
