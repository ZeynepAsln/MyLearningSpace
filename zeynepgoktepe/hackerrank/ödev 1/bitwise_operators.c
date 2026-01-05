#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Bu fonksiyon verilen n ve k değerlerine göre maksimum AND, OR ve XOR sonuçlarını hesaplar.
void calculate_the_maximum(int n, int k) {
    // max_and, max_or, ve max_xor başlangıçta 0 olarak ayarlanır.
    int max_and = 0, max_or = 0, max_xor = 0;

    // i ve j arasındaki olası tüm kombinasyonlar için döngü başlatılır. 
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            // AND, OR ve XOR işlemleri yapılır.
            int temp_and = i & j;
            int temp_or = i | j;
            int temp_xor = i ^ j;

            // Eğer AND işlemi sonucu max_and'dan büyük ve k'dan küçükse, max_and güncellenir.
            if (temp_and > max_and && temp_and < k) {
                max_and = temp_and;
            }
            // Eğer OR işlemi sonucu max_or'dan büyük ve k'dan küçükse, max_or güncellenir.
            if (temp_or > max_or && temp_or < k) {
                max_or = temp_or;
            }
            // Eğer XOR işlemi sonucu max_xor'dan büyük ve k'dan küçükse, max_xor güncellenir.
            if (temp_xor > max_xor && temp_xor < k) {
                max_xor = temp_xor;
            }
        }
    }

    // Hesaplanan maksimum değerler yazdırılır.
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main() {
    int n, k;

    // Kullanıcıdan n ve k değerleri alınır.
    scanf("%d %d", &n, &k);

    // Maksimum değerleri hesaplayan fonksiyon çağrılır.
    calculate_the_maximum(n, k);

    return 0;
}
