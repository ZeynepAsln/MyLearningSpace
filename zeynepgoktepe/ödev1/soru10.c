#include <stdio.h>
#include <math.h>

int main() {
    int n, orijinal_sayi, kalan, basamak_sayisi = 0, toplam = 0;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    
    orijinal_sayi = n;
    
    while (orijinal_sayi != 0) {
        orijinal_sayi /= 10;
        basamak_sayisi++;
    }
    
    orijinal_sayi = n;
    
    while (orijinal_sayi != 0) {
        kalan = orijinal_sayi % 10;
        toplam += pow(kalan, basamak_sayisi);
        orijinal_sayi /= 10;
    }

    if (toplam == n) {
        printf("%d bir Armstrong sayısıdır.\n", n);
    } else {
        printf("%d bir Armstrong sayısı değildir.\n", n);
    }
    
    return 0;
}
