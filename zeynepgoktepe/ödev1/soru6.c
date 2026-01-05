#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    
    int dizi[n];
    
    printf("Dizinin elemanlarını giriniz:\n");
    for(i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    for(i = 0; i < n; i++) {
        if(dizi[i] % 2 == 0) {
            count++;
        }
    }
    
    printf("Dizideki çift sayıların adedi: %d\n", count);
    
    return 0;
}
