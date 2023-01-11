//  Stack class test program
//
//  Tests: default_ctor
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

        // TEST
        stack<int>  x;

        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;

        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<double>  x;

        // VERIFY
        assert(x.empty());
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing default_ctor." << std::endl;
    return 0;
}

