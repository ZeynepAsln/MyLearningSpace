#include <stdio.h>

int main() {
    int dizi[5];
    int i, j, temp;

    printf("5 elemanlı dizi için değerleri giriniz:\n");
    for(i = 0; i < 5; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    printf("Dizinin küçükten büyüğe sıralanmış hali:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
