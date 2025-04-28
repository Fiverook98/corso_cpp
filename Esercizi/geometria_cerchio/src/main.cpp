#include <cstdio>
#include "function.hpp"
using namespace std;

int main(){
    float raggio;
    float area_c, circon;

    raggio = 2.0f;
    circon = calcola_circonferenza(raggio);
    area_c = area_cerchio(raggio);

    printf("La lunghezza della circonferenza vale: %f\n", circon);
    printf("L'area del cerchio misura: %f\n", area_c);

    return 0;
}