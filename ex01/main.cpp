#include "iter.hpp"

int main(void)
{
    // Test con array di interi
    int numeri[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    std::cout << "--- Test con interi ---" << std::endl;
    iter(numeri, size, call<int>);
    
    std::cout << std::endl;
    
    // Test con array di stringhe
    std::string parole[] = {"ciao", "mondo", "template", "test"};
    int sizeStr = 4;
    
    std::cout << "--- Test con stringhe ---" << std::endl;
    iter(parole, sizeStr, call<std::string>);
    
    std::cout << std::endl;
    
    // Test con array di float
    float decimali[] = {1.5f, 2.7f, 3.14f};
    int sizeFloat = 3;
    
    std::cout << "--- Test con float ---" << std::endl;
    iter(decimali, sizeFloat, call<float>);
    
    return 0;
}