/*Alışveriş Fiyat Hesaplayıcı
Kullanıcının alışveriş sepetine farklı ürünler eklediği ve toplam fiyatı hesapladığı bir uygulama geliştirin. Kullanıcıya indirim oranı uygulayarak sonucu verin.
Fonksiyonlar ile

farklı ürünler ve fiyatları belli olsun 
*/


#include <stdio.h>
#include <stdlib.h>

void urunler()
{
    printf("elma: 10 TL\n");
    printf("armut: 15 TL\n");
    printf("karpuz: 20 TL\n");
    printf("kavun: 25 TL\n");

}

void sepet()
{
    int secim, adet;
    float toplam = 0;
    printf("1-Elma\n2-Armut\n3-Karpuz\n4-Kavun\n5-Cikis\n");
    while(1)
    {
        printf("Seciminizi yapiniz: ");
        scanf("%d", &secim);
        if(secim == 5)
            break;
        printf("Adet giriniz: ");
        scanf("%d", &adet);
        if(secim == 1)
            toplam += 10*adet;
        else if(secim == 2)
            toplam += 15*adet;
        else if(secim == 3)
            toplam += 20*adet;
        else if(secim == 4)
            toplam += 25*adet;
        else
            printf("Hatali secim yaptiniz.\n");
    }
    printf("Toplam: %.2f TL\n", toplam);
}

int main()
{
    urunler();
    sepet();
    return 0;
}







