#include <cstdio>
float area_cerchio(float);
float area_corona(float, float);
using namespace std;

int main(){

    float r_mag, r_min, area{};

    printf("Inserire il raggio maggiore = "); scanf("%f", &r_mag);
    printf("Inserire il raggio minore = "); scanf("%f", &r_min);
    
    area = area_corona(r_mag, r_min);
    
    printf("L'area della corona circolare di raggio minore %f e raggio maggiore %f è: %f\n", r_min, r_mag, area);
    return 0;
    
}
