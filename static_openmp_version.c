#include <omp.h>
#include "func.h"

#define MAX_THREADS 2



int main () {

    int stride = 16/MAX_THREADS;

    int V[] = {10, 11, 12, 13, 10, 11, 12, 13, 10, 11, 12, 13, 10, 11, 12, 13};

    int i;

    #pragma omp parallel for schedule(static) num_threads(MAX_THREADS)
    for (i = 0; i < MAX_THREADS; i++) {
        for (int j = i*stride; j < (i + 1)*stride; j++) {
            V[j] = func(3, V[j]);
            printf("%i\n", V[j]);
        }
    }

    printf("===========\n");

    for (int x = 0; x < 16; x++) {
        printf("%i\n", V[x]);
    }


    return 0; 

}