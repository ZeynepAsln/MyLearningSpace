#include <stdio.h>

int main() {
    int n, i, max;
    
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    
    int dizi[n];
    
    printf("Dizinin elemanlarını giriniz:\n");
    for(i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    max = dizi[0];

    for(i = 1; i < n; i++) {
        if(dizi[i] > max) {
            max = dizi[i];
        }
    }
    
    printf("Dizideki en büyük sayı: %d\n", max);
    
    return 0;
}
