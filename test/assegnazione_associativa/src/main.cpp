#include <cstdio>
using namespace std;
int main(){
    signed int x, y, z;

    x = y = z = 27; // x = (y = (z = 27))
    printf("Sizeof(x) = %lu byte valore (d)= %d\n",sizeof(x), x);
    printf("Sizeof(y) = %lu byte valore (d)= %d\n",sizeof(y), y);
    printf("Sizeof(z) = %lu byte valore (d)= %d\n",sizeof(z), z);

    z = 10;
    y = z;
    x = y;

    printf("Sizeof(x) = %lu byte valore (d)= %d\n",sizeof(x), x);
    printf("Sizeof(y) = %lu byte valore (d)= %d\n",sizeof(y), y);
    printf("Sizeof(z) = %lu byte valore (d)= %d\n",sizeof(z), z);

    return 0;
}