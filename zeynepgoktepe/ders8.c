/*
#include<stdio.h>
#include<stdlib.h>

struct öğrenci{
    char isim[10];
    char soyad[10];
    int yaş;
};

int main(){
    struct öğrenci zeynep={"zeynep","aslan",21};

    printf("%s \t %s \t %d",zeynep.isim,zeynep.soyad,zeynep.yaş);

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct öğrenci_bilgi{
    int numara;
    char isim[10];
    char soyad[10];
    int yaş;
};

int main(){
    struct öğrenci_bilgi öğrenci1,öğrenci2;
    öğrenci1.numara=522;
    strcpy(öğrenci1.isim,"zeynep");
    strcpy(öğrenci1.soyad,"aslan");
    öğrenci1.yaş=21;

    öğrenci2 = öğrenci1;

    printf("%s\n",öğrenci2.isim);
    printf("%s\n",öğrenci2.soyad);
    printf("%d\n",öğrenci2.numara);
    printf("%d\n",öğrenci2.yaş);


    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

typedef struct{
    float xekseni;
    float yekseni;
} nokta;

int main(){
    nokta nokta1;
    nokta1.xekseni=1.2376481546218;
    nokta1.yekseni=2.273612783921;

    printf("x ekseni: %.3f , y ekseni: %.4f ",nokta1.xekseni,nokta1.yekseni );

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>


typedef struct{
    char isim[10];
    float xekseni;
    float yekseni;
} nokta;

void yazdır(nokta a[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%s= (%.2f,%.2f)\n",a[i].isim,a[i].xekseni,a[i].yekseni);
    }

}
int main(){
    nokta array[5]={{"can",5,4},{"osman",5,1},{"kadir",1,3},{"hasan",8,9}};

    yazdır(array,5);
    return 0;
}
*/

/*
#include<stdio.h>
#include<stdlib.h>

typedef enum{
    ocak=10,
    şubat,
    mart,
    nisan,
    mayıs,
    haziran,
    temmuz,
    ağustos,
    eylül,
    ekim,
    kasım,
    aralık,
}aylar;

void ayi_göster(aylar c){
    switch(c){
        case ocak:
            printf("ocak");
            break;
        case şubat:
            printf("şubat");
            break;
        case mart:
            printf("mart");
            break;
        case nisan:
            printf("nisan");
            break;
         case mayıs:
            printf("mayıs");
            break;
         case haziran:
            printf("haziran");
            break;
        case temmuz:
            printf("temmuz");
            break;
         case ağustos:
            printf("ağustos");
            break;
         case eylül:
            printf("eylül");
            break;
          case ekim:
            printf("ekim");
            break;
         case kasım:
            printf("kasım");
            break;
         case aralık:
            printf("aralık");
            break;
    }
}


int main(){
    aylar c;
    printf("bir sayı giriniz: ");
    scanf("%d",&c);
    if(c<=21 && c>=10){}{
         ayi_göster(c);
    }

    return 0;
}
*/
