#include <stdio.h>

int main() {
    int n, i;
    
    // Kullanıcıdan bir sayı iste
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    
    // 0'dan n'ye kadar olan tüm çift sayıları yazdır
    printf("0'dan %d'ye kadar olan çift sayılar:\n", n);
    for(i = 0; i <= n; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
