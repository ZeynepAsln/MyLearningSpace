#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    // En az anlamlı basamaktan en anlamlı basamağa kadar döngü başlatıyoruz
    for (int i = digitsSize - 1; i >= 0; i--) {
        // Mevcut basamağı bir artır
        digits[i]++;
        // Eğer bu basamak 10 olursa, sıfır yapıp bir sonraki daha anlamlı basamağa geç
        if (digits[i] < 10) {
            // Eğer basamak 10'dan küçükse, bu durumda dizi boyutunu değiştirmeden mevcut diziyi döndür
            *returnSize = digitsSize; // Dizi boyutunda değişiklik yok
            return digits; // Orijinal diziyi döndür
        } else {
            // Eğer basamak 10 olursa, bu basamağı sıfırlıyoruz
            digits[i] = 0;
        }
    }

    // Eğer tüm basamaklar 0 olursa (örn: 999 gibi), en başa 1 eklememiz gerekiyor
    // Bu yüzden diziyi bir eleman artırıp, yeni bir dizi tahsis ediyoruz
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    result[0] = 1; // En anlamlı basamağa 1 ekle (örneğin 999 -> 1000 gibi)
    
    // Orijinal diziyi yeni diziye kopyalıyoruz, 1. indisten itibaren
    for (int i = 1; i <= digitsSize; i++) {
        result[i] = digits[i - 1]; // Orijinal diziyi yeni dizinin 2. indisi ve sonrasına kopyala
    }
    
    // Yeni dizinin boyutunu güncelliyoruz
    *returnSize = digitsSize + 1; // Dizi boyutunu 1 artır (çünkü en başa bir eleman eklendi)
    
    // Yeni diziyi döndür
    return result;
}
