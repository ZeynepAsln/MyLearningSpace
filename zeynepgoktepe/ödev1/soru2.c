#include <stdio.h>

int main() {
    int n, i, toplam = 0;

    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    
  
    for(i = 1; i <= n; i++) {
        toplam += i;
    }
    
    printf("%d'ye kadar olan doğal sayıların toplamı: %d\n", n, toplam);
    
    return 0;
}
