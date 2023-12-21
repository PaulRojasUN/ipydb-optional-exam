#include <pthread.h>
#include "func.h"

#define MAX_THREADS 2

int V[] = {10, 11, 12, 13, 10, 11, 12, 13, 10, 11, 12, 13, 10, 11, 12, 13};

int stride = 16/MAX_THREADS;

void work(int val) {

    int start = val*stride;

    int end = (val + 1)*stride;

    for (int j = start; j < end; j++) {
        V[j] = func(3, V[j]);
        printf("%i and %i\n", V[j], val);
    }
}

int main () {

    pthread_t threads[MAX_THREADS];


    printf("Threads: %i\n", MAX_THREADS);

    for (int i = 0; i < MAX_THREADS; i++) {
        pthread_create(&threads[i], NULL, work, i);
    }

    for (int i = 0; i < MAX_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }

    printf("===========\n");

    for (int x = 0; x < 16; x++) {
        printf("%i\n", V[x]);
    }

    return 0; 

}
