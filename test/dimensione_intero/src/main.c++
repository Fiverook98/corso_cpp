#include <cstdio>
#include <iostream>

int main(){
    /*
    tipo intero 
    short int 16 bit
    int 16 bit 
    long int 32 bit 
    long long int 64 bit
    */
    std::cout << "Dimensione del tipo short int {" << sizeof(short int) << "}\n";
    std::cout << "Dimensione del tipo int {" << sizeof(int) << "}\n";
    std::cout << "Dimensione del tipo long int {" << sizeof(long int) << "}\n";
    std::cout << "Dimensione del tipo long long int {" << sizeof(long long int) << "}\n";
    return 0;
}
