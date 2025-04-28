#include <cstdio>
#include "abs.hpp"

int main(){
    float f, val_assoluto;
    printf("Inserisci il tuo numero: \n");
    scanf("%f", &f);
    val_assoluto = valore_assolutoF(f);
    printf("Il valore assoluto del tuo numero è: %f\n", val_assoluto);
    return 0;
}