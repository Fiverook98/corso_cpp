//Area cerchio
float area_cerchio(float r){
    float area{};
    const float Pi = 3.1415986f;
    area = Pi * r * r;
    return area;
}
//Area Corona
float area_corona(float R, float r){
    float area_c{};
    area_c = area_cerchio(R) - area_cerchio(r);
    return area_c;
}
