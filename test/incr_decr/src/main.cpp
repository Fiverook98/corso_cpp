#include <cstdio>
using namespace std;

int main(){
    int i{10}, y{20}, z{};
    
    i++;
    printf("i = %d\n", i);
    ++y;
    printf("y = %d\n", y);
    i--;
    printf("i = %d\n", i);
    --y;
    printf("y = %d\n", y);

    z = ++y * i;
    printf("z = %d\ty = %d\ti = %d\n", z, y, i);
    z = y++ * i;
    printf("z = %d\ty = %d\ti = %d\n", z, y, i);
    z = y-- * --i;
    printf("z = %d\ty = %d\ti = %d\n", z, y, i);

    z = i++ - ++i * i;
    printf("z = %d\ty = %d\ti = %d\n", z, y, i);

    return 0;
}