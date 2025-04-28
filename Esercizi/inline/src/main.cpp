#include "pi.hpp"
#include <cstdio>

double circumference(double radius);

int main(){

    printf("%f\n", pi());
    printf("%f\n",circumference(2.0));

    return 0;
}