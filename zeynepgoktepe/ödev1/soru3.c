#include <stdio.h>

int main() {
    int n, basamak_sayisi = 0;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    
    if (n < 0) {
        n = -n;
    }
    
    do {
        basamak_sayisi++;
        n /= 10;
    } while (n != 0);
    
    
    printf("Girilen sayının basamak sayısı: %d\n", basamak_sayisi);
    
    return 0;
}
