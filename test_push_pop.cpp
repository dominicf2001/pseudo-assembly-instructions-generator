//  Stack class test program
//
//  Tests: push_pop
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
        x.push(1);
        
        // VERIFY
        assert(x.top() == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(0);
        x.push(0);
        
        // VERIFY
        assert(x.top() == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(0);
        x.pop();
        x.push(5);
        x.pop();
        x.push(10);
        x.pop();
        
        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(3);
        x.push(10);        
        
        // VERIFY
        assert(x.top() == 10);
        assert(x.pop() == 10);
        assert(x.top() == 3);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("");
        x.push("");
        
        // VERIFY
        assert(x.top() == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("Hello");
        
        // VERIFY
        assert(x.top() == "Hello");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("hello");
        x.push("world");        
        
        // VERIFY
        assert(x.top() == "world");
        assert(x.pop() == "world");
        assert(x.top() == "hello");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("h");
        x.pop();
        x.push("goooo");
        x.pop();
        x.push("yes!!");
        x.pop();
        
        // VERIFY
        assert(x.empty());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<stack<String>>  x;
        stack<String>         y;
        stack<String>         z;
        y.push("");
        y.push("1234oooo");
        
        x.push(y);
        x.push(z);   
        
        // VERIFY
        assert(x.pop().empty());
        assert(x.top().top() == "1234oooo");
    }
    
    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing push_pop." << std::endl;
    return 0;
}

