#include <stdio.h>

void diziYazdir(int dizi[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

int main() {
    int dizi[5] = {1, 2, 3, 4, 5};
    diziYazdir(dizi, 5); // diziyi fonksiyona gönderiyoruz

    return 0;
}
