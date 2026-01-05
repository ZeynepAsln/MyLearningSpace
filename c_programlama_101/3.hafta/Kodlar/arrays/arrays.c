#include <stdio.h>
#include <stdlib.h>

int main() {
    //tanımlama 
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    //diziye eleman atama
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    b[3] = 4;
    b[4] = 5;

    //diziye eleman yazdırma
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    

    return 0;
}