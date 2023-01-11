//  Stack class test program
//
//  Tests: assign
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
        stack<int>  y;
        y.push(5);

        x = y;
        
        // VERIFY
        assert(x.top() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y;
        y.push(5);
        
        x = y;

        x.pop();
        
        // VERIFY
        assert(x.empty());
        assert(y.pop() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y;
        y.push(10);
        y.push(20);
        y.push(30);

        x = y;
        
        // VERIFY
        assert(x.pop() == 30);
        assert(x.pop() == 20);
        assert(x.pop() == 10);
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        stack<String>  y;
        y.push("test1");
        y.push("test2");
        y.push("test3");

        x = y;
        
        // VERIFY
        assert(x.pop() == "test3");
        assert(x.pop() == "test2");
        assert(x.pop() == "test1");
        assert(x.empty());
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y;

        x = y;
        
        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y;
        x.push(5);
        
        x = y;
        
        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y;
        x.push(300);
        x.push(0);
        x.push(17);

        y.push(5);
        y.push(21);
        
        x = y;
        
        // VERIFY
        assert(x.pop() == 21);
        assert(x.pop() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        stack<int>  y;
        stack<int>  z;        
        x.push(300);

        y.push(5);
        
        z = x = y;
        
        // VERIFY
        assert(z.pop() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        stack<String>  y;
        stack<String>  z;        
        x.push("test");

        y.push("hello world");
        
        z = x = y;
        
        // VERIFY
        assert(z.pop() == "hello world");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing assign." << std::endl;
    return 0;
}

