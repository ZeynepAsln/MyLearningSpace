/*
#include<stdio.h>

int ters(int sayi,int yeni){

    if(sayi>0){
    yeni= (yeni*10)+(sayi%10);
    sayi/= 10;
    return ters(sayi, yeni);
    }

    else{
    return yeni;
    }
}

int main(){
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    int yeni =0;
    int x;
    x = ters(sayi, yeni);
    
    if (x == sayi){
        printf("polindrom sayi");
    }
    
    else{
        printf("polindrom degil");
    }
    
    return 0;
}
*/

/*
#include<stdio.h>

void yazdir(int a,int b){
    if(a<=b){
        printf("%d ", a);
        yazdir(a+1,b);
    }
}

int main(){
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d", &a);

    int b;
    printf("Bir sayi giriniz: ");
    scanf("%d", &b);

    yazdir(a,b);

    return 0;
}
*/

/*
#include<stdio.h>

void tek_yazdir(int a,int b){
    if(a<=b){
        if(a%2 == 1){
            printf("%d ", a);
        }
        tek_yazdir(a+1,b);
    }
}

void cift_yazdir(int a,int b){
    if(a<=b){
        if(a%2 == 0){
            printf("%d ", a);
        }
        cift_yazdir(a+1,b);
    }
}

int main(){
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d", &a);

    int b;
    printf("Bir sayi giriniz: ");
    scanf("%d", &b);

    int sec;
    printf("tek ise 1 cift ise 2 yaz: ");
    scanf("%d", &sec);

    if(sec== 1){
        tek_yazdir(a,b);
    }

    else if(sec==2){
        cift_yazdir(a,b);
    }

    return 0;
}
*/

/*
#include<stdio.h>
#include <stdlib.h>

int main(){
    int a[5];
    printf("bir dizi giriniz: ");
    
    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    int max = 0;
    int max2 = 0;

    for(int i=0; i<5; i++){
        if (max< a[i]){
            max = a[i];
        }
    }

    for(int i=0; i<5; i++){
        if (max2< a[i]) {
            if (a[i]<max){
                max2 = a[i];
            }
        }
    }

    printf("\n\n%d",max2);

    return 0;
}
*/