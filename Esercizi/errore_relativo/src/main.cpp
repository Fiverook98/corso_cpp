#include <cstdio>
#include "err.hpp"

int main(){
    
    float x, y, e_rel;
    for(int i = 1; i <= 3; i++){
        printf("Inserisci il primo numero: ");
        scanf("%f", &x);
        printf("Inserisci il secondo numero: ");
        scanf("%f", &y);

        e_rel = errore_relativoF(x, y);
        printf("L'errore relativo tra %f e %f è %e\n", x, y, e_rel);
    }
    return 0;

}