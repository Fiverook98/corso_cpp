#include "function.hpp"

float area_cerchio(float r){
    float area, circonferenza;
    const float PIGRECO = 3.1415926f;

    circonferenza = calcola_circonferenza(r);
    area = circonferenza * circonferenza / (4.0 * PIGRECO);
    return area;
}
float calcola_circonferenza(float r){
    const float PIGRECO = 3.1415926f;
    float c;

    c = 2.0 * PIGRECO * r;
    return c;
}

float area_corona(float r_min, float r_mag){
    float a_max, a_min;
    a_max = area_cerchio(r_mag);
    a_min =  area_cerchio(r_min);
    return a_max - a_min;
}