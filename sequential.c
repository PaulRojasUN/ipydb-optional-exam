#include "func.h"

int main () {

    int V[] = {10, 11, 12, 13, 10, 11, 12, 13, 10, 11, 12, 13, 10, 11, 12, 13};

    for (int i = 0; i < 16; i++) {
        V[i] = func(3, V[i]);
        printf("%i\n", V[i]);
    }

    return 0; 

}


