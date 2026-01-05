#include <stdio.h>

int main() {
    int n, ilk_basamak, son_basamak;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    
    if (n < 0) {
        n = -n;
    }
    
    son_basamak = n % 10;
    
    ilk_basamak = n;

    while (ilk_basamak >= 10) {
        ilk_basamak /= 10;
    }
    
    printf("Girilen sayının ilk basamağı: %d\n", ilk_basamak);
    printf("Girilen sayının son basamağı: %d\n", son_basamak);
    
    return 0;
}
