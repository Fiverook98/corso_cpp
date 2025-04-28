#include <cstdio>
using namespace std;

int main() {
    
    unsigned int a;
    unsigned int b;
    unsigned int c;
    double d;
    unsigned int e;

    a = 27 - 8 / 2;
    b = 3 * 7 - 1 / 4 * 2 + 2;
    c = 16 % 3 + 2;
    d = 6.0 / 3.0 - 1.0;
    printf("Valore a = %u\n", a);
    printf("Valore b = %u\n", b);
    printf("Valore c = %u\n", c);
    printf("Valore d = %.1f\n", d);
    e = (3 * 7 - 1) / (4 * 2 + 2);
    printf("Valore e = %u\n", e);

    return 0;
}