#include <cstdio>
#include <cmath>

float distanza_origF(float ascissa, float ordinata){
    return sqrt(ascissa*ascissa + ordinata*ordinata);
}

int main(){
    float x, y, distanza_origine;

    x = 1.f; y = 2.f;
    distanza_origine = distanza_origF(x, y);
    printf("La distanza di origine del punt di cordinate (%f, %f) è: %f\n", x, y, distanza_origine);
    return 0;
}