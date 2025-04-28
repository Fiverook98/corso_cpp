#include <cstdio>
using namespace std;

int main(){
    int *a {};
    int b = *a;
    printf("Locazione di memoria puntata da a: %d\n", *a);
    printf("Valore di b = %d\n", b);
    return 0;
}