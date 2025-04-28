#include <cstdio>
using namespace std;

int main(){
    int x, y, z;

    x = 0, y = 1, z = 2;

    printf("Indirizzo di memoria di y del main: %llu\n", &y);

    //Blocco di codice anonimo
    {
        int y, j;
        y = 5;
        printf("Indirizzo di memoria di y dello scope anonimo: %llu\n", &y);
        printf("x = %d\n", x);
        printf("y = %d\n", y);
        printf("z = %d\n", z);
    }
    //printf("j = %d\n", j); // sarà un errore in fase di compilazione
    printf("Sono nello scope del main:\ny = %d\n", y);
    return 0;
}