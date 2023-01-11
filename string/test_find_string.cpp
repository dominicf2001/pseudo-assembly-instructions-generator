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
        assert(str.findstr(0, "") == -1);
	assert(str.findstr(0, " ") == -1);
	assert(str.findstr(0, "hello") == -1);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("Hello world");
	
	
        // Verify
	assert(str.findstr(0, "Hello") == 0);
	assert(str.findstr(0, "world") == 6);
	assert(str.findstr(2, "Hello") == -1);
	assert(str.findstr(0, " ") == 5);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str(" Hello world ");

        // Verify
	assert(str.findstr(0, "ello") == 2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str(" Hello world ");

        // Verify
	assert(str.findstr(0, "ello") == 2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("testing");
	
	
        // Verify
	assert(str.findstr(0, "t") == 0);
	assert(str.findstr(0, "g") == 6);
	assert(str.findstr(6, "g") == 6);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("test testing test hello ");
	
	
        // Verify
	assert(str.findstr(-100, "t") == 0);
	assert(str.findstr(100, " ") == 23);
    }

    std::cout << "Done testing find string" << std::endl;
    return 0;
}
