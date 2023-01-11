#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("Hello world");

        // Verify
        assert(str.findch(0, 'H') == 0);
	assert(str.findch(0, 'd') == 10);
	assert(str.findch(0, ' ') == 5);
	assert(str.findch(0, 'o') == 4);
	assert(str.findch(4, 'd') == 10);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str;

        // Verify
        assert(str.findch(0, ' ') == -1);
	assert(str.findch(0, 'a') == -1);
	assert(str.findch(4, 'b') == -1);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str('a');

        // Verify
        assert(str.findch(0, 'a') == 0);
	assert(str.findch(0, 'b') == -1);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str('a');

        // Verify
        assert(str.findch(0, 'a') == 0);
    }
    
    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello");

        // Verify
        assert(str.findch(0, 'a') == -1);
	assert(str.findch(3, 'a') == -1);
	assert(str.findch(3, 'e') == -1);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello");

        // Verify
        assert(str.findch(100, 'o') == 4);
	assert(str.findch(-100, 'h') == 0);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");

        // Verify
        assert(str.findch(254, 'a') == 254);
    }
    
    std::cout << "Done testing find char" << std::endl;
    return 0;
}
