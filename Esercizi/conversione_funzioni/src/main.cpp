#include <cstdio>
struct X{
    operator char() { return 0;}
};
void print(int x){
    printf("Sono nell'int");
}
void print(double x){
    printf("Sono nel double");
}

int main(){
    X x;
    print(x);

    return 0;
}