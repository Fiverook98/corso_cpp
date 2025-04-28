#include <cstdio>
using namespace std;

int main(){
    signed int a{5};
    signed int *pa{&a};
    signed int b;
    signed int **ppa;
    b = **&pa;
    ppa = &pa;
    printf("Valore di a = %d\n", **ppa);
    printf("Indirizzo di memoria di a: %lu %lu %lu\n",pa, &a, *ppa);
    printf("indirizzo di memoria della variabile pa: %lu %lu\n", &pa, ppa);

    return 0;
}