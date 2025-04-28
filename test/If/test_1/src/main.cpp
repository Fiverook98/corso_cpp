#include <cstdio>
using namespace std;

int main(){
    float x, val_assoluto;
    printf("Digitare un numero: ");
    scanf("%f", &x);
    if (x >= 0.0f){
        val_assoluto = x;
    }else{
        val_assoluto = -x;
    }
    printf("Il valore assoluto di %f è %f\n", x, val_assoluto);
    return 0;
}