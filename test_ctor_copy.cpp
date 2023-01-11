//  Stack class test program
//
//  Tests: ctor_copy
//

#include "stack.hpp"
#include "../string/string.hpp"
#include <cassert>
#include <iostream>

stack<int> pushToCopiedStack(stack<int> copy, int n) {
    copy.push(n);
    return copy;
}

stack<String> pushToCopiedStack(stack<String> copy, String n) {
    copy.push(n);
    return copy;
}

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(5);

        // VERIFY
        assert(pushToCopiedStack(x, 10).top() == 10);
        assert(x.top() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;

        // VERIFY
        assert(pushToCopiedStack(x, 7).top() == 7);
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("testing123");

        // VERIFY
        assert(pushToCopiedStack(x, "newtop").top() == "newtop");
        assert(x.top() == "testing123");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;

        // VERIFY
        assert(pushToCopiedStack(x, "hello").top() == "hello");
        assert(x.empty());
    }
    
    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing ctor_copy." << std::endl;
    return 0;
}

