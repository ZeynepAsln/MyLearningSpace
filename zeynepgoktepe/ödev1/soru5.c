#include <stdio.h>

int main() {
    int n, basamak, carpim = 1;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    
    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        basamak = n % 10;
        carpim *= basamak;
        n /= 10;
    }
    
    printf("Girilen sayının basamaklarının çarpımı: %d\n", carpim);
    
    return 0;
}
