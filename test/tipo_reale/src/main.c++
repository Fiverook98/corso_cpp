#include <cstdio>
#include <limits>
using namespace std;
int main(){
    printf("La dimensione del tipo float è %lu byte ovvero %lu bit\n",sizeof(float),
                                                                    sizeof(float)*8);
    printf("La dimensione del tipo double è %lu byte ovvero %lu bit\n",sizeof(double),
                                                                    sizeof(double)*8);
    printf("La dimensione del tipo long double è %lu byte ovvero %lu bit\n",sizeof(long double),
                                                                    sizeof(long double)*8);
    
    printf("Tipo Float\nMantissa = %d\nPrecisione Decimale Equivalente %d\n",
                numeric_limits<float>::digits,numeric_limits<float>::digits10);
    printf("Tipo Double\nMantissa = %d\nPrecisione Decimale Equivalente %d\n",
                    numeric_limits<double>::digits,numeric_limits<double>::digits10);
                    printf("Tipo Long Double\nMantissa = %d\nPrecisione Decimale Equivalente %d\n",
                        numeric_limits<long double>::digits,numeric_limits<long double>::digits10);    
    
    printf("Intervallo tipo single     : [%e, %e]\n", numeric_limits<float>::min(),
                                                    numeric_limits<float>::max());
    printf("Intervallo tipo double     : [%.14e, %.14e]\n", numeric_limits<double>::min(),
                                                    numeric_limits<double>::max());
    printf("Intervallo tipo long double: [%.Le, %.Le]\n", numeric_limits<long double>::min(),
                                                    numeric_limits<long double>::max());
    return 0;
}