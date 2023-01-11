//  Stack class test program
//
//  Tests: empty
//

#include "stack.hpp"
#include "../string/string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST

        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(5);
        x.push(100);
        x.pop();
        x.pop();
        
        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("hello");
        x.push("world");
        x.pop();
        x.pop();
        
        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<double>  x;

        // TEST
        x.push(5.88);
        x.push(9.2);
        x.pop();
        x.pop();
        
        // VERIFY
        assert(x.empty());
     }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing empty." << std::endl;
    return 0;
}

