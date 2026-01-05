#include <stdio.h>

int main() {
    int dizi[3] = {10, 20, 30};
    int *ptr = dizi; // dizi'nin ilk elemanının adresini gösterir

    for (int i = 0; i < 3; i++) {
        printf("dizi[%d] = %d, *(ptr + %d) = %d\n", i, dizi[i], i, *(ptr + i));
    }

    return 0;
}
