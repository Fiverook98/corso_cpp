#include <cstdio>
using namespace std;

int main(){
    int z, x = 2, y = 3;
    z = (x + 1, y +2);
    printf("z = %d\tx = %d\ty = %d\n", z, x, y);
    z = x + 1, y + 2;
    printf("z = %d\tx = %d\ty = %d\n", z, x, y);
    z = (x = x + 1, y = y + 2);
    printf("z = %d\tx = %d\ty = %d\n", z, x, y);
    (z = x) = (x + 1, y = y + 3);
    printf("z = %d\tx = %d\ty = %d\n", z, x, y);
    return 0;
}