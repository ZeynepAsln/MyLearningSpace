#include <stdio.h>

void tekcift(int a){
    if(a%2==0){
        printf("bu sayı çift sayıdır.");
    }
    else {
        printf("bu sayı tek sayıdır");
    }
}


int hesap(int number){
    if(number%2==0){
        printf("bu sayı çift sayıdır.");
    }
    else {
        printf("bu sayı tek sayıdır");
    }
    return 1;
}

int main(){
    int sayı;
    printf("bir sayı giriniz: ");
    scanf("%d",&sayı);

    tekcift(sayı);
    //hesap(sayı);
/*
    if(sayı%2==0){
        printf("bu sayı çift sayıdır");
    }
    else{
        printf("bu sayı tek sayıdır");
    }
*/

    return 0;
}