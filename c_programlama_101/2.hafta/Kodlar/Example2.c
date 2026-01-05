//Hesap Makinesi
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1, sayi2, secim;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);
    printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\nSeciminizi yapiniz: ");
    scanf("%d", &secim);
    switch(secim)
    {
        case 1:
            printf("Sonuc: %d", sayi1+sayi2);
            break;
        case 2:
            printf("Sonuc: %d", sayi1-sayi2);
            break;
        case 3:
            printf("Sonuc: %d", sayi1*sayi2);
            break;
        case 4:
            printf("Sonuc: %d", sayi1/sayi2);
            break;
        default:
            printf("Hatali secim yaptiniz.");
    }
    return 0;
}