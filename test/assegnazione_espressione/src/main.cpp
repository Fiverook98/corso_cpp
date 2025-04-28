#include <cstdio>
using namespace std;
int main () {

    signed int x = 10, y = 20;

    x = y + 0 * (y = x);
    printf("Sizeof(x)=%lu byte valore (x)=%d\n", sizeof(x),x);
    printf("Sizeof(y)=%lu byte valore (y)=%d\n", sizeof(y),y);

    return 0;
}