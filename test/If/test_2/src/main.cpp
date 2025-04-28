#include <cstdio>

using namespace std;

int main(){
    unsigned int a, b, sum;

    printf("Inserire il primo numero (intero positivo): ");
    scanf("%u", &a);
    printf("Inserisci il secondo numero (intero positivo): ");
    scanf("%u", &b);

    if (a == b){
        unsigned int prod;
        prod = a *b;
        printf("Il prodotto tra %u + %u vale %u\n", a, b, prod); 
    }
    sum = a + b;
    printf("La somma tra %u + %u vale %u\n", a, b, sum); 
    

    return 0;
}