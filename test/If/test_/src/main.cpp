#include <cstdio>
using namespace std;

int main(){
    int a, b, max, min;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);

    (a > b) ? (max = a, min = b) : (max = b, min = a);
    printf("massimo = %d\n", max);
    printf("minimo = %d\n", min);

    return 0;
}