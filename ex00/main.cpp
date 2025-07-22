#include "whatever.hpp"

int main()
{
    // Test con interi
    int a = 2;
    int b = 3;
    
    std::cout << "--- Test con interi ---" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << min(a, b) << std::endl;
    std::cout << "max(a, b) = " << max(a, b) << std::endl;
    
    // Test della funzione swap
    std::cout << "Prima dello swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "Dopo lo swap: a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl;
    
    // Test con float
    float c = 2.5f;
    float d = 1.8f;
    
    std::cout << "--- Test con float ---" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << min(c, d) << std::endl;
    std::cout << "max(c, d) = " << max(c, d) << std::endl;
    
    swap(c, d);
    std::cout << "Dopo lo swap: c = " << c << ", d = " << d << std::endl;
    
    std::cout << std::endl;
    
    // Test con stringhe
    std::string s1 = "ciao";
    std::string s2 = "mondo";
    
    std::cout << "--- Test con stringhe ---" << std::endl;
    std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
    std::cout << "min(s1, s2) = " << min(s1, s2) << std::endl;
    std::cout << "max(s1, s2) = " << max(s1, s2) << std::endl;
    
    swap(s1, s2);
    std::cout << "Dopo lo swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
    
    return 0;
}