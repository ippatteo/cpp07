#include "Array.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Testing Array class ===" << std::endl;
    
    try {
        // Test 1: Default constructor
        std::cout << "\n1. Testing default constructor:" << std::endl;
        Array<int> empty;
        std::cout << "Empty array created successfully" << std::endl;
        
        // Test 2: Constructor with size
        std::cout << "\n2. Testing constructor with size:" << std::endl;
        Array<int> arr(5);
        std::cout << "Array of size 5 created" << std::endl;
        
        // Test 3: Fill array with values
        std::cout << "\n3. Testing operator[] for assignment:" << std::endl;
        for (unsigned int i = 0; i < 5; i++) {
            arr[i] = i * 10;
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        }
        
        // Test 4: Copy constructor
        std::cout << "\n4. Testing copy constructor:" << std::endl;
        Array<int> copy(arr);
        std::cout << "Copy created, values:" << std::endl;
        for (unsigned int i = 0; i < 5; i++) {
            std::cout << "copy[" << i << "] = " << copy[i] << std::endl;
        }
        
        // Test 5: Assignment operator
        std::cout << "\n5. Testing assignment operator:" << std::endl;
        Array<int> assigned(3);
        assigned = arr;
        std::cout << "Assignment done, values:" << std::endl;
        for (unsigned int i = 0; i < 5; i++) {
            std::cout << "assigned[" << i << "] = " << assigned[i] << std::endl;
        }
        
        // Test 6: Modify original and check independence
        std::cout << "\n6. Testing independence after copy:" << std::endl;
        arr[0] = 999;
        std::cout << "After modifying original arr[0] = " << arr[0] << std::endl;
        std::cout << "Copy still has copy[0] = " << copy[0] << std::endl;
        
        // Test 7: Out of bounds access
        std::cout << "\n7. Testing out of bounds access:" << std::endl;
        try {
            std::cout << "Trying to access arr[10]..." << std::endl;
            arr[10] = 42;
        } catch (const std::out_of_range& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }
        
        // Test 8: Testing with different types
        std::cout << "\n8. Testing with string type:" << std::endl;
        Array<std::string> strArr(3);
        strArr[0] = "Hello";
        strArr[1] = "World";
        strArr[2] = "!";
        
        for (unsigned int i = 0; i < 3; i++) {
            std::cout << "strArr[" << i << "] = " << strArr[i] << std::endl;
        }
        
        // Test 9: Self-assignment
        std::cout << "\n9. Testing self-assignment:" << std::endl;
        arr = arr;
        std::cout << "Self-assignment completed, arr[0] = " << arr[0] << std::endl;
        
        std::cout << "\n=== All tests completed ===" << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }
    
    return 0;
}