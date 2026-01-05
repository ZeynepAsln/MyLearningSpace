#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Kullanıcıdan n değerini alıyoruz (kare desenin merkezindeki en büyük sayı)
    int n;
    scanf("%d", &n);

    // Desenin toplam uzunluğunu hesaplıyoruz (n'e bağlı olarak 2*n - 1)
    int len = 2*n - 1;

    // Dış döngü satırlar için (toplamda len kadar satır)
    for (int i = 0; i < len; i++) {
        // İç döngü sütunlar için (toplamda len kadar sütun)
        for (int j = 0; j < len; j++) {
            // `min` en küçük mesafeyi bulur (i, j, len-i-1, len-j-1 arasında en küçük değeri buluyor)
            int min = i < j ? i : j;                // i ve j arasındaki küçük değeri seçiyoruz
            min = min < len-i ? min : len-i-1;      // min ile len-i-1 arasındaki küçük değeri seçiyoruz
            min = min < len-j-1 ? min : len-j-1;    // min ile len-j-1 arasındaki küçük değeri seçiyoruz

            // n - min değeri yazdırılıyor (n'den küçük olan mesafeye göre sayıyı azaltıyoruz)
            printf("%d ", n - min);
        }
        // Her satır bittiğinde bir yeni satıra geçmek için '\n' yazdırıyoruz
        printf("\n");
    }

    return 0;
}
