#include "Array.hpp"
#include <iostream>

int main()
{
    try {
        // Test costruttore con dimensione
        Array<int> arr(5);
        std::cout << "Array di 5 elementi creato" << std::endl;
        
        // Riempi array con valori
        for (unsigned int i = 0; i < 5; i++) {
            arr[i] = i * 10;
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        }
        
        // Test copy constructor
        Array<int> copia(arr);
        std::cout << "Copia creata, primo elemento: " << copia[0] << std::endl;
        
        // Test con stringhe
        Array<std::string> stringhe(3);
        stringhe[0] = "ciao";
        stringhe[1] = "mondo";
        stringhe[2] = "!";
        std::cout << "Test stringhe: " << stringhe[0] << " " << stringhe[1] << stringhe[2] << std::endl;
        
    } catch (const std::exception& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    }
    return 0;
}