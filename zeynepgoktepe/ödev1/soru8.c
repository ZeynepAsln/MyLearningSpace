#include <stdio.h>

int main() {
    int n, i;
    float toplam = 0, ortalama;
    
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    
    int dizi[n];
    
    printf("Dizinin elemanlarını giriniz:\n");
    for(i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }
    
    for(i = 0; i < n; i++) {
        toplam += dizi[i];
    }
    
    ortalama = toplam / n;
    
    printf("Dizideki sayıların ortalaması: %.2f\n", ortalama);
    
    return 0;
}
