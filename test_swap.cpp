//  Stack class test program
//
//  Tests: swap
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
        stack<int>  y;

        x.push(28);
        x.push(5);
        y.push(300);
        
        // TEST
        x.swap(y);

        // VERIFY
        assert(x.pop() == 300);
        assert(x.empty());
        assert(y.pop() == 5);
        assert(y.pop() == 28);
        assert(y.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String>  y;

        x.push("test1");
        x.push("test2");
        y.push("hello world");
        
        // TEST
        x.swap(y);

        // VERIFY
        assert(x.pop() == "hello world");
        assert(x.empty());
        assert(y.pop() == "test2");
        assert(y.pop() == "test1");
        assert(y.empty());
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
        stack<int>  y;

        x.push(28);
        x.push(5);
        
        // TEST
        x.swap(y);

        // VERIFY
        assert(x.empty());
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing swap." << std::endl;
    return 0;
}

