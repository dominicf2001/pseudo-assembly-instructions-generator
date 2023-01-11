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
	String str2("abc");

        // Verify
        assert(str1 < str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("abc");
	String str2("bde");

        // Verify
        assert(str1 < str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("abc");
	String str2("bdef");

        // Verify
        assert(str1 < str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("a");
	String str2("b");

        // Verify
        assert(str1 < str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("abc");
	String str2("abcd");

        // Verify
        assert(str1 < str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("abc");
	String str2("babc");

        // Verify
        assert(str1 < str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("ajsfjeeofejejabc");
	String str2("b");

        // Verify
        assert(str1 < str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("ze");

        // Verify
        assert("hello" < str1);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("hello");

        // Verify
        assert(str1 < "ze");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("i");

        // Verify
        assert('g' < str1);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("g");

        // Verify
        assert(str1 < 'i');
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("g");

        // Verify
        assert(str1 < 'i');
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("a");
	std::cout << (str1 == "") << std::endl << std::flush;

        // Verify
        assert(!(str1 <= ""));
    }
    
    std::cout << "Done testing less than" << std::endl;
    return 0;
}
