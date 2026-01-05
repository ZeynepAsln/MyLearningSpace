/*
//1.) 
#include <stdio.h>

int main() {
    int n, i;

    // Kullanıcıdan bir sayı isteme
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);

    // Çift sayıları yazdırma
    printf("%d sayısına kadar olan çift sayılar:\n", n);
    for (i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

------------------------------------------------------------
//2.)
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Kullanıcıdan bir sayı isteme
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);

    // Doğal sayıların toplamını bulma
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Sonucu ekrana yazdırma
    printf("%d sayısına kadar olan doğal sayıların toplamı: %d\n", n, sum);

    return 0;
}


------------------------------------------------------------
*/
//3.)
#include <stdio.h>

int main() {
    int i, j;

    // Çarpım tablosu başlıkları
    printf("  |");
    for (i = 1; i <= 10; i++) {
        printf("%3d ", i);
    }
    printf("\n");
    
    // Başlık ve çizgi
    printf("---|");
    for (i = 1; i <= 10; i++) {
        printf("----");
    }
    printf("\n");

    // Çarpım tablosu
    for (i = 1; i <= 10; i++) {
        printf("%2d |", i);
        for (j = 1; j <= 10; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }

    return 0;
}

/*
------------------------------------------------------------

//4.)
#include <stdio.h>

int main() {
    int n, basamakSayisi = 0;

    // Kullanıcıdan bir sayı isteme
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);

    // Basamak sayısını bulma
    while (n != 0) {
        n /= 10;
        basamakSayisi++;
    }

    // Sonucu ekrana yazdırma
    printf("Girdiğiniz sayının basamak sayısı: %d\n", basamakSayisi);

    return 0;
}


------------------------------------------------------------

//5.)
#include <stdio.h>

int main() {
    int n, ilkBasamak, sonBasamak;

    // Kullanıcıdan bir sayı isteme
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);

    // Son basamağı bulma
    sonBasamak = n % 10;

    // İlk basamağı bulma
    ilkBasamak = n;
    while (ilkBasamak >= 10) {
        ilkBasamak /= 10;
    }

    // Sonuçları ekrana yazdırma
    printf("Girdiğiniz sayının ilk basamağı: %d\n", ilkBasamak);
    printf("Girdiğiniz sayının son basamağı: %d\n", sonBasamak);

    return 0;
}

------------------------------------------------------------
//6.)
#include <stdio.h>

int main() {
    int i;
    float sayi, toplam = 0.0;

    // Kullanıcıdan beş sayı isteme
    printf("Lütfen beş sayı giriniz:\n");
    
    for (i = 1; i <= 5; i++) {
        printf("Sayı %d: ", i);
        scanf("%f", &sayi);
        toplam += sayi;
    }

    // Ortalamayı hesaplama
    float ortalama = toplam / 5;

    // Sonucu ekrana yazdırma
    printf("Girdiğiniz sayıların ortalaması: %.2f\n", ortalama);

    return 0;
}

------------------------------------------------------------

//7.)
#include <stdio.h>

int main() {
    int n, basamak, carpim = 1;

    // Kullanıcıdan bir sayı isteme
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);

    // Basamakların çarpımını bulma
    while (n != 0) {
        basamak = n % 10;  // Son basamağı bul
        carpim *= basamak; // Basamağı çarpıma ekle
        n /= 10;           // Son basamağı çıkar
    }

    // Sonucu ekrana yazdırma
    printf("Girdiğiniz sayının basamaklarının çarpımı: %d\n", carpim);

    return 0;
}

------------------------------------------------------------
//8.)
#include <stdio.h>

int main() {
    int n, i, sayi, ciftSayisi = 0;

    // Dizinin boyutunu alma
    printf("Kaç elemanlı bir dizi girmek istersiniz? ");
    scanf("%d", &n);

    int dizi[n];

    // Dizinin elemanlarını alma
    printf("Lütfen dizinin elemanlarını giriniz:\n");
    for (i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // Çift sayıları sayma
    for (i = 0; i < n; i++) {
        if (dizi[i] % 2 == 0) {
            ciftSayisi++;
        }
    }

    // Sonucu ekrana yazdırma
    printf("Girdiğiniz dizideki çift sayıların adedi: %d\n", ciftSayisi);

    return 0;
}


------------------------------------------------------------
//9.)
#include <stdio.h>

int main() {
    int n, i, enBuyuk;

    // Dizinin boyutunu alma
    printf("Kaç elemanlı bir dizi girmek istersiniz? ");
    scanf("%d", &n);

    int dizi[n];

    // Dizinin elemanlarını alma
    printf("Lütfen dizinin elemanlarını giriniz:\n");
    for (i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // En büyük sayıyı bulma
    enBuyuk = dizi[0]; // İlk elemanı en büyük olarak kabul et
    for (i = 1; i < n; i++) {
        if (dizi[i] > enBuyuk) {
            enBuyuk = dizi[i];
        }
    }

    // Sonucu ekrana yazdırma
    printf("Girdiğiniz dizideki en büyük sayı: %d\n", enBuyuk);

    return 0;
}


------------------------------------------------------------
//10.)

#include <stdio.h>

int main() {
    int n, i;
    float toplam = 0.0;

    // Dizinin boyutunu alma
    printf("Kaç elemanlı bir dizi girmek istersiniz? ");
    scanf("%d", &n);

    int dizi[n];

    // Dizinin elemanlarını alma
    printf("Lütfen dizinin elemanlarını giriniz:\n");
    for (i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
        toplam += dizi[i];
    }

    // Ortalamayı hesaplama
    float ortalama = toplam / n;

    // Sonucu ekrana yazdırma
    printf("Girdiğiniz dizideki sayıların ortalaması: %.2f\n", ortalama);

    return 0;
}

*/







