#include <iostream>
#include <cassert>
#include "string.hpp"

//===========================================================================
int main () {

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("hello");
        String str2("world");

        str1.swap(str2);

        // Verify
        assert(str1 == "world");
        assert(str2 == "hello");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1("world");
        String str2("world");

        str1.swap(str2);

        // Verify
        assert(str1 == "world");
        assert(str2 == "world");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1;
        String str2;

        str1.swap(str2);

        // Verify
        assert(str1 == "");
        assert(str2 == "");
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str1;
        String str2("hello");

        str1.swap(str2);

        // Verify
        assert(str1 == "hello");
        assert(str2 == "");
    }

    std::cout << "Done testing swap assign" << std::endl;
    return 0;
}
