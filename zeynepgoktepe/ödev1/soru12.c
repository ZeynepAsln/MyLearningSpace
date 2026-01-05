#include <stdio.h>

int main() {
    int n, i, toplam = 0;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);

    for(i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            toplam += i;
        }
    }
    
    if(toplam == n) {
        printf("%d bir mükemmel sayıdır.\n", n);
    } else {
        printf("%d bir mükemmel sayı değildir.\n", n);
    }
    
    return 0;
}
