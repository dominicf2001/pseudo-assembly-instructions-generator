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
	String subStr;

	subStr = str.substr(0, 0);
	
        // Verify
        assert(str == subStr);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str;
	String subStr;

	subStr = str.substr(4, 10);
	
        // Verify
        assert(str == subStr);
	assert(str == "");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");
	String subStr;

	subStr = str.substr(0, 4);
	
        // Verify
        assert(subStr == "hello");
	assert(subStr[5] == 0);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");
	String subStr;

	subStr = str.substr(6, 10);
	
        // Verify
        assert(subStr == "world");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");
	String subStr;

	subStr = str.substr(0, 10);
	
        // Verify
        assert(subStr == "hello world");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");
	String subStr;

	subStr = str.substr(0, 0);
	
        // Verify
        assert(subStr == "h");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello test");
	String subStr;

	subStr = str.substr(9, 9);
	
        // Verify
        assert(subStr == "t");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello test");
	String subStr;

	subStr = str.substr(1, 2);
	
        // Verify
        assert(subStr == "el");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("world hello");
	String subStr;

	subStr = str.substr(5, 6);
	
        // Verify
        assert(subStr == " h");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("world hello");
	String subStr;

	subStr = str.substr(7, 6);
	
        // Verify
        assert(subStr == "");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("world hello");
	String subStr;

	subStr = str.substr(-100, 100);
	
        // Verify
        assert(subStr == "world hello");
    }    
    
    std::cout << "Done testing substring" << std::endl;
    return 0;
}
