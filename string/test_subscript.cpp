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

        // Verify
        assert(str[0] == 0);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str('a');

        // Verify
        assert(str[0] == 'a');
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");

        // Verify
        assert(str[4] == 'o');
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");

        // Verify
        assert(str[5] == ' ');
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");

        // Verify
        assert(str[10] == 'd');
    }
    
    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");

        // Verify
        assert(str[11] == 0);
    }


    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");

        // Verify
        assert(str[0] == 'h');
    }

    

    std::cout << "Done testing subscript" << std::endl;
    return 0;
}
