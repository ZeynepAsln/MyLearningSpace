#include<stdio.h>
int main(){

    /*
    int n,i;
    int *p;

    printf("dizinin boyutunu girin: ");
    scanf("%d",&n);

    int dizi[n];
    printf("Dizinin elemanlarını giriniz: ");
    for(i=0;i<n;i++){
        scanf("%d",&dizi[i]);
    }

    p=&dizi[n-1];
    printf("Dizi tersten: \n");
    for(i=n;i>0;i--){
        printf("%d",*p);
        p--;
    }
*/

/*
    int dizi[5];
    int i, j, temp;

    printf("5 elemanlı dizi için değerleri giriniz:\n");
    for(i = 0; i < 5; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    printf("Dizinin küçükten büyüğe sıralanmış hali:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

*/

/*
 int n, orijinal_sayi, kalan, basamak_sayisi = 0, toplam = 0;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    
    orijinal_sayi = n;
    
    while (orijinal_sayi != 0) {
        orijinal_sayi /= 10;
        basamak_sayisi++;
    }
    
    orijinal_sayi = n;
    
    while (orijinal_sayi != 0) {
        kalan = orijinal_sayi % 10;
        toplam += pow(kalan, basamak_sayisi);
        orijinal_sayi /= 10;
    }

    if (toplam == n) {
        printf("%d bir Armstrong sayısıdır.\n", n);
    } else {
        printf("%d bir Armstrong sayısı değildir.\n", n);
    }
    
*/


    return 0;
}