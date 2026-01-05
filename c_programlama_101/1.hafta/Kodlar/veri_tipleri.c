#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define pi 3.14

int main(){

    int tamsayi = 10;
    float ondaliklisayi = 10.524;
    double ikinciondalikli = 42.324451252154;
    char harf = 'a';
    bool dogru = true;


    printf("%d\n",tamsayi);
    printf("%f",ondaliklisayi);
    printf("\n");
    printf("%lf",ikinciondalikli);
    printf("\n");
    printf("%c",harf);
    printf("\n");
    printf("%d",harf);  // ascii kodu için 
    printf("\n");
    printf("%d",dogru);
    printf("\n");


    /*
    paragraf şeklinde yazmak için açıklama satırı.
    */
//------------------------------------------------------------
// const ve define anlatma zamanı:
    printf("%f\n",pi*3);

    int a = 10;
    const int b = 15;

    a=11;
  //b=12 hata verir.
    printf("%d\n",a);
    printf("%d\n",b);
//------------------------------------------------------------
// scanf 

    int num;
    printf("lütfen bir sayı giriniz: ");
    scanf("%d",&num);

    printf("%d\n",num);

    return 0;
}