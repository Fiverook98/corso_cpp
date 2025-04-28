#include <cstdio>
using namespace std;

int main(){
    int a, *ptr, b;

    ptr = &a;
    a = 10;
    printf("Valore di a = %d\n", a);
    *&a = 20;
    printf("Valore di a = %d\n", a);
    printf("Indirizzo di a: %p\n", ptr);
    ptr = &b;
    *ptr = 15;
    printf("Valore di b = %d\n", b);
    printf("Indirizzo di b: %p\n", ptr);
    // printf("Indirizzo di b con ptr: %p\n", *ptr);

    return 0;
}