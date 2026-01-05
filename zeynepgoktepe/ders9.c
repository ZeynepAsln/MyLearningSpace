/*
#include<stdio.h>
#include <stdlib.h>

union test{
    int x;
    double y;
    char a;
};

int main(){
    union test u;
    u.x=2;
    u.y=8.36137126746129;
    printf("%d\n",u.x);
    printf("%lf\n",u.y);
    u.a='a';
    printf("%c\n",u.a);

    printf("union tuttuğu alan %d bytetir",sizeof(u));

    return 0;
}
*/

/*
#include<stdio.h>
#include <stdlib.h>

struct kişi{
    char isim[10];
    char soyad[10];
    int yaş;
    float boy;
};

int main(){
    struct kişi x;

    printf("isminizi girin: ");
    scanf("%s",x.isim);
    printf("soyisminizi girin: ");
    scanf("%s",x.soyad);
    printf("yaş girin: ");
    scanf("%d",&x.yaş);
    printf("boy girin: ");
    scanf("%f",&x.boy);

    printf("%s %s %d %.2f",x.isim,x.soyad,x.yaş,x.boy);

    return 0;
}
*/

/*
#include<stdio.h>
struct kitap{
    char yazar[50];
    char isim[50];
    int yıl;
};

int main(){
    struct kitap x;
    printf("yazarı giriniz: ");
    scanf("%[^\n]%c",x.yazar); // boşlukları da alan scanf formatı
    printf("kitabın ismini giriniz: ");
    scanf("%[^\n]%c",x.isim);
    printf("yayın yılı girin: ") ;
    scanf("%d",&x.yıl);

    printf("%s  %s  %d",x.yazar,x.isim,x.yıl);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct yarismaci{
    char isim[50];
    char soyisim[50];
    float puan[5];
    float performans;
};

float performans(yarismaci x){
    float max = 0;
    float min = 6.0;
    float sonuc = 0;

    for(int i=0; i<5; i++){
        if (max< x.puan[i]){
            max = x.puan[i];
        }
        if (min > x.puan[i]){
            min = x.puan[i];
        }
    }
    sonuc = (max+min)/2;

    return sonuc;
}


int main() {
    yarismaci x;
    printf("isim giriniz: ");
    scanf("%s", x.isim);
    printf("soyisim giriniz: ");
    scanf("%s", x.soyisim);

    printf("puan giriniz: ");
    for(int i=0; i<5; i++){
    scanf("%f",&x.puan[i]);
    }
    x.performans = performans(x);

    printf("performans degeri: %f", x.performans);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int no;
    char cevaplar[5];
}ogrenci;

typedef struct{
    int no;
    int note;
}sonuc;


int main() {
    ogrenci x;
    sonuc y;
    printf("no giriniz: ");
    scanf("%d", &x.no);
    printf("cevaplari giriniz: ");

    int dogru = 0;
    int yanlis = 0;
    char anahtar[5]= {'A', 'C', 'C', 'B', 'D'};

    for(int i=0; i<5; i++){
        scanf(" %c", &x.cevaplar[i]);
        if (x.cevaplar[i] == anahtar[i]){
            dogru++;
        }
        else {
            yanlis++;
        }
    }
    
    y.no = x.no;
    y.note = dogru -(yanlis/4);

    printf("notun: %d", y.note);
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char isim[10];
    float kilo;
    float fiyat;
}meyve;

typedef struct{
    meyve f[2];

}sepet;

void meyve_olustur(meyve *t){
    printf("isim giriniz: ");
    scanf("%s", t -> isim);
    printf("kilo giriniz: ");
    scanf("%f", &t -> kilo);
    printf("fiyat giriniz: ");
    scanf("%f", &t -> fiyat);
}

void sepet_ekle(sepet *p){
    for(int i=0; i<2; i++){
        meyve_olustur(&p -> f[i]);

    }
}

void agirligi_hesapla(sepet k, float *g){
    *g=0;
    for(int i=0; i<2; i++){
       *g+= k.f[i].kilo;
    }
}

void fiyat_hesaplama(sepet k, float *g){
    *g=0;
    for(int i=0; i<2; i++){
        *g+= k.f[i].fiyat*k.f[i].kilo;
    }
}

int main() {
    float a ;
    float b ;
    sepet x;
    sepet_ekle(&x);
    agirligi_hesapla(x,&a);
    fiyat_hesaplama(x, &b);
    
    printf("%s %s %f %f", x.f[0].isim, x.f[1].isim, a, b);

    return 0;
}
*/