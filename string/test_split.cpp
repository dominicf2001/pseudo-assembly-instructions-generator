#include <iostream>
#include <cassert>
#include "string.hpp"
#include <vector>

//===========================================================================
int main () {

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello_world");
	std::vector<String> splitResult = str.split('_');

        // Verify
	std::vector<String> correctSplitResult = {"hello", "world"};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello@world");
	std::vector<String> splitResult = str.split('@');

        // Verify
	std::vector<String> correctSplitResult = {"hello", "world"};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("hello world");
	std::vector<String> splitResult = str.split(' ');

        // Verify
	std::vector<String> correctSplitResult = {"hello", "world"};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("");
	std::vector<String> splitResult = str.split('_');

        // Verify
	std::vector<String> correctSplitResult = {""};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("_hello__world_");
	std::vector<String> splitResult = str.split('_');

        // Verify
	std::vector<String> correctSplitResult = {"", "hello", "", "world", ""};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("*hello**world*");
	std::vector<String> splitResult = str.split('*');

        // Verify
	std::vector<String> correctSplitResult = {"", "hello", "", "world", ""};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("ghelloggworldg");
	std::vector<String> splitResult = str.split('g');

        // Verify
	std::vector<String> correctSplitResult = {"", "hello", "", "world", ""};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("ZhelloZZworldZ");
	std::vector<String> splitResult = str.split('Z');

        // Verify
	std::vector<String> correctSplitResult = {"", "hello", "", "world", ""};
        assert(splitResult == correctSplitResult);
	}

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str(" hello  world ");
	std::vector<String> splitResult = str.split(' ');

        // Verify
	std::vector<String> correctSplitResult = {"", "hello", "", "world", ""};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("___h___w___");
	std::vector<String> splitResult = str.split('_');

        // Verify
	std::vector<String> correctSplitResult = {"", "", "", "h", "", "", "w", "", "", ""};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("_");
	std::vector<String> splitResult = str.split('_');

        // Verify
	std::vector<String> correctSplitResult = {"", ""};
        assert(splitResult == correctSplitResult);
    }

    {
        //------------------------------------------------------
      
        // Setup fixture

        // Test 
        String str("131.123.47.176 - - [18/Sep/2002:12:05:25 -0400] \"GET /~darci/ HTTP/1.0\" 200 5625");
	std::vector<String> splitResult = str.split(' ');
	
        // Verify
	std::vector<String> correctSplitResult = {"131.123.47.176", "-", "-", "[18/Sep/2002:12:05:25", "-0400]", "\"GET", "/~darci/", "HTTP/1.0\"", "200", "5625"};
	String test(correctSplitResult[3].split('[')[1].split('/')[2].split(':')[3]);

	std::cout << correctSplitResult[9] << std::endl << std::flush;
	
        assert(splitResult == correctSplitResult);
    }

    {
      
    }

    
    std::cout << "Done testing test split" << std::endl;
    return 0;
}
