#include <stdio.h>

int main() {
    int n, orijinal_sayi, ters_sayi = 0, kalan;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    
    orijinal_sayi = n;
    
    while (n != 0) {
        kalan = n % 10;
        ters_sayi = ters_sayi * 10 + kalan;
        n /= 10;
    }
    
    if (orijinal_sayi == ters_sayi) {
        printf("%d bir palindrome sayıdır.\n", orijinal_sayi);
    } else {
        printf("%d bir palindrome sayı değildir.\n", orijinal_sayi);
    }
    
    return 0;
}
