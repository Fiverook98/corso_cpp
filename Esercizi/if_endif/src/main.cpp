#include <cstdio>
#define MAX 200
using namespace std;

int main(){

    #if MAX > 100
        #if SERIAL_VERSION
            int port = 198;
        #else
            int port = 200;
        #endif
        printf("port = %d\n", port);
    #else
        float x = 1.0f;
        printf("x = %f\n", x);
    #endif
    return 0;
}