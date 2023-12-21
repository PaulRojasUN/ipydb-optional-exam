#include <stdio.h>
int func(int m, int n) {
    if (m == 0) {
        return  n + 1; 
    } else if (n == 0) {
        return func(m - 1, 1);
    } else {
        return func(m - 1, func(m, n - 1));
    }
}

int greet() {   
    printf("hey");
    return 0;
}