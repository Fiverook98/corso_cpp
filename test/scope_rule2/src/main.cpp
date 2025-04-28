#include <cstdio>
using namespace std;

int main(){

    float calcola_circonferenza(float);
    float raggio, circonferenza;

    printf("Sono nel main()\n");
    printf("L'indirizo di memoria della variabile raggio è: %lu\n", &raggio);
    printf("L'indirizzo di memoria della variabile circonferenza è: %lu\n", &circonferenza);
    printf("Inserire la lunghezza del raggio: ");
    scanf("%f", &raggio);

    circonferenza = calcola_circonferenza(raggio);
    printf("Sono ritornato nel main()\n");
    printf("La lunghezza della circonferenza di raggio %f è %f\n", raggio, circonferenza);

    return 0;
}

float calcola_circonferenza(float raggio){
    const float PIGRECO = 3.1415920f;
    float circonferenza;

    printf("Sono nella function calcola_circonferenza()\n");
    printf("L'indirizzo di memoria della variabile raggio è: %lu\n", &raggio);
    printf("L'indirizzo di memoria della variabile circonferenza è: %lu\n", &circonferenza);
    circonferenza = 2.0f * PIGRECO * raggio;
    raggio = 0.0f;
    printf("Esco dalla function calcola_circonferenza()\n");
    return circonferenza;
}