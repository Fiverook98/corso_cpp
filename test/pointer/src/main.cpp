#include <cstdio>
using namespace std;

int main(){
    /*
    TIPO DI DATO PUNTATORE
    <type>*
    int*
    float*
    double*
    char*
    bool*
    */

    printf("La dimensione del tipo di dato puntatore a unsigned char (unsigned char*) è" 
                "[%lu] byte ovvero [%lu] bit\n", sizeof(unsigned char*), 8*sizeof(unsigned char*));
    printf("La dimensione del tipo di dato puntatore a short int  (short int*) è" 
                "[%lu] byte ovvero [%lu] bit\n", sizeof(short*), 8*sizeof(short*));
    printf("La dimensione del tipo di dato puntatore a int (int*) è" 
                "[%lu] byte ovvero [%lu] bit\n", sizeof(int*), 8*sizeof(int*));
    printf("La dimensione del tipo di dato puntatore a float (float*) è" 
                "[%lu] byte ovvero [%lu] bit\n", sizeof(float*), 8*sizeof(float*));
    printf("La dimensione del tipo di dato puntatore a double (double*) è" 
                "[%lu] byte ovvero [%lu] bit\n", sizeof(double*), 8*sizeof(double*));

    return 0;
}