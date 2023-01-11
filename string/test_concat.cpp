#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1;
	str1 = str1 + "hello";
	
        // Verify
        assert(str1 == "hello");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("h");
	str1 = str1 + 'w';
	
        // Verify
        assert(str1 == "hw");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("w");
	str1 = 'h' + str1;
	
        // Verify
        assert(str1 == "hw");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1;
	str1 = str1 + "";
	
        // Verify
        assert(str1 == "");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1(" Hello ");
	String str2("world");
	str1 = str1 + str2;
	
        // Verify
        assert(str1 == " Hello world");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1(" te st ");
	str1 = "" + str1;
	
        // Verify
        assert(str1 == " te st ");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("testing");
	str1 = str1 + "";
	
        // Verify
        assert(str1 == "testing");
    } 

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("testing");
	str1 = str1 + "hello" + 'z';
	
        // Verify
        assert(str1 == "testinghelloz");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("testing");
	str1 += "hello";
	
        // Verify
        assert(str1 == "testinghello");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("testing");
	(str1 += "hello") += 'z';
	
        // Verify
        assert(str1 == "testinghelloz");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb  ");
	(str1 += " aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	
        // Verify
        assert(str1 == "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb   aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1;
	str1 = str1 + "cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc";
	
        // Verify
        assert(str1 == "cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc");
    }
    std::cout << "Done testing concat" << std::endl;
    return 0;
}
