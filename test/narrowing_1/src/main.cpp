#include <cstdio>
using namespace std;

int main (){
    /*
    
    5 000 000 000
    
    0000 0000 0000 0000 0000 0000 0001 0010 1010 0000 0101 1111 0010 0000 0000
    
    */
    signed int eta_anni{5'000'000'000}; //Error -> Narrowing conversion
    float raggio{59.4};
    double lato{3.12}, x{1.0};
    char lettera_alfabeto{'g'};
    signed int p1{lato}; //Warning -> Narrowing conversion
    signed int p2{x}; //Warning -> Narrowing conversion

    printf("Valore della variabile eta_anni = %d\n", eta_anni);
    printf("Valore della variabile raggio = %.1f\n", raggio);
    printf("Valore della variabile lato = %.2f\n", lato);
    printf("Valore della variabile x = %.2f\n", x);
    printf("Valore della variabile lettera_alfabeto = %c\n", lettera_alfabeto);
    printf("Valore della variabile p1 = %d\n", p1);
    printf("Valore della variabile p2 = %d\n", p2);

    return 0;

}