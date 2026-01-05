#include <stdio.h>
#include <stdlib.h>

int main(){
    int sayi1, sayi2;
    printf("İki sayı giriniz: ");
    scanf("%d %d",&sayi1,&sayi2);

    if(sayi1>sayi2){
        printf("Birinci sayı büyüktür.");
    }
    else if(sayi1<sayi2){
        printf("İkinci sayı büyüktür.");
    }
    else{
        printf("Sayılar eşittir.");
    }

    return 0;

}