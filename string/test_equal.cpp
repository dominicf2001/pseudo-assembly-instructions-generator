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
	String str2;

        // Verify
        assert(str1 == str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1;
	String str2("h");

        // Verify
        assert(str1 != str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
      String str1("h");

        // Verify
        assert(str1 != "");
    }
    
    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
      String str1("");

        // Verify
        assert(str1 != "b");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("    ");
	String str2("    ");

        // Verify
        assert(str1 == str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("Hello world");
	String str2("Hello world");

        // Verify
        assert(str1 == str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1(" Hello world ");
	String str2(" Hello world ");

        // Verify
        assert(str1 == str2);
    }
 
    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1(" Hello world ");
	String str2(" Hello world ");

        // Verify
        assert(str1 == str2);
    }
    
    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	String str2("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");

        // Verify
        assert(str1 == str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("d");
	String str2("d");

        // Verify
        assert(str1 == str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("");
	String str2("");

        // Verify
        assert(str1 == str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("hello");
	String str2("hello");

        // Verify
        assert(str1 == str2);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("hello");

        // Verify
        assert("hello" == str1);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("hello");

        // Verify
        assert(str1 == "hello");
    } 

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("h");

        // Verify
        assert('h' == str1);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("h");

        // Verify
        assert(str1 == 'h');
    }
        
    
    std::cout << "Done testing equals" << std::endl;
    return 0;
}
