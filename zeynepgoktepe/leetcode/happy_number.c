#include <math.h>  // pow fonksiyonunu kullanmak için gerekli

// Verilen bir sayının her basamağının karesini alıp toplamını döndüren fonksiyon
int sumPow(int n){
    int sum = 0;  // Sonuç toplamını tutmak için değişken
    
    // Sayı sıfır olana kadar basamaklarını alıp karelerini topluyoruz
    while (n) {
        // n'in son basamağını alır, karesini hesaplar ve sum'a ekler
        sum += pow(n % 10, 2);  // (n % 10) sayının son basamağını alır, pow ile karesi alınır
        
        // n'i bir basamak azaltarak devam eder (son basamağı atar)
        n /= 10;
    }
    
    return sum;  // Tüm basamakların karelerinin toplamını döndür
}

// Bir sayının "mutlu sayı" olup olmadığını kontrol eden fonksiyon
bool isHappy(int n) {
    int res = n;  // res değişkeni, sayının mutlu olup olmadığını anlamak için kullanılır
    
    // Sonsuz döngü ile sayının mutlu olup olmadığını bulmaya çalışıyoruz
    while (1) {
        res = sumPow(res);  // Sayının basamaklarının karelerinin toplamını al
        
        // Eğer sonuç 1 ise, sayı "mutlu sayı"dır ve true döndür
        if(res == 1) return true;
        
        // Eğer sonuç 89'a ulaşırsa ya da 1'den küçük olursa, sayı "mutlu" değil
        if(res < 1 || res == 89) return false;  // 89, mutlu olmayan sayıların döngüsüne girdiğini gösterir
    }
}
