/*
//1.soru
#include<stdio.h>
int main(){
    
    int n,i;
    printf("Bir sayı giriniz: ");
    scanf("%d",&n);

    printf("çift sayılar: ");

    for(i=0; i<n ; i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }

    return 0;
}

//4.soru
#include<stdio.h>
int main(){

    int n, basamaksayisi=0;
    printf("Bir sayı giriniz: ");
    scanf("%d",&n);

    while(n!=0){ 
        n=n/10;
        basamaksayisi++;    
    }

    printf("sayı %d basamaklıdır.",basamaksayisi);
    return 0;
}

//6.soru
#include<stdio.h>
int main(){

    int i;
    float sayi, toplam= 0.0;


    printf("Beş sayı giriniz: ");
    for(i=1;i<=5 ; i++){
        printf("Sayı %d: ",i);
        scanf("%f",&sayi);
        toplam += sayi;
    }

    float ortalama= toplam/5;
    printf("bu sayıların ortalaması %.2f",ortalama);

    return 0;
}

//soru 7
#include<stdio.h>
int main(){
    int n;
    int sonbasamak,çarpım=1;
    printf("Bİr sayı giriniz: ");
    scanf("%d",&n);

    while(n!=0){
        sonbasamak= n%10;   
        n=n/10;     
        çarpım *= sonbasamak;
    }

    printf("bu sayıların çarpımı %d ",çarpım);
    return 0;
}

//8.soru
#include<stdio.h>
int main(){

    int n,i;
    printf("eleman sayısını giriniz: ");
    scanf("%d",&n);

    int dizi[n];
    for(i=0 ; i<n ; i++){
        printf("eleman %d: ",i+1);
        scanf("%d",&dizi[i]);
    }
    
    int çiftsayı=0;

    for( i=0 ; i<n ; i++){
        if(dizi[i]%2==0){
            çiftsayı++;
        }
    }
    printf("çift sayı adedi %d",çiftsayı);
    return 0;
}

//9.soru 
#include<stdio.h>
int main(){

    int n,i,enbüyük;
    printf("eleman sayısını giriniz: ");
    scanf("%d",&n);

    int dizi[n];
    for(i=0 ; i<n ; i++){
        printf("eleman %d: ",i+1);
        scanf("%d",&dizi[i]);
    }
    
   enbüyük= dizi[0];
   for(i=1 ; i<n ; i++){
        if(dizi[i] > enbüyük){
            enbüyük = dizi[i];
        }
    }

    printf( " en büyük sayımız: %d",enbüyük);
    return 0;
}
*/

/*
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //strlen() fonksiyonu 
    char isim[]="zeynep aslan";
    printf("%d",strlen(isim));
    // uzunluk bulur

    //strcpy() fonksiyonu
    char isim2[] = "zeynep";
    char isim3[] ;
    strcpy(isim3,isim2);
    printf("%s",isim3);
    // metni kopyalar

    //strncpy() fonksiyonu
    char isim4[]="mustafa";
    char isim5[10];   
    printf("%s",strncpy(isim5,isim4,3));

    //gets fonksiyonu 
    char isim6[20];
    printf("isminizi giriniz: ");  
    // gets(isim6);

    for(int i=0 ; i<20 ; i++){
        scanf("%c",isim6[i]);
    }

    //fgets fonksiyonu 
    char isim7[20];
    printf("isminizi giriniz: ");
    fgets(isim7 , 2 , stdin);

    //strrev() fonksiyonu
    char isim8[] = "mustafa";
    printf("%s",strrev(isim8));  
    //ters çevirme fonksiyonu

    //strupr() fonksiyonu
    char isim9[]="mustafa";
    printf("%s",strupr(isim9)); 
    //küçük harfleri büyük harfe çevirir.

    //strlwr() fonksiyonu
    char isim10[]="MUSTAFA";
    printf("%s",strlwr(isim10)); 
    // büyük harfleri küçük harfe çevirir.


    char dizi[7]= {'m','u','s','t','a','f','a'};
    char dizi2[7]= "mustafa";

    char array[]="merhaba dünya";
    array[0]='n'; 
    printf("%s\n",array);

    char isim[20];
    printf("isminizi giriniz: ");
    gets(isim);
    printf("%s\n",isim);

    char isim2[20]="zeynep";
    printf("isminiz: %s\n",isim2);
 
    return 0;
}
*/

/**/
#include<stdio.h>

void tekçift(int num){
    if(num%2==0){
        printf("bu sayi çift sayıdır");
    }
    else {
        printf("bu sayi tek sayidir.");
    }
}

int fonksiyon(int num){
    num=num*2;
    num+=6;
    printf("%d",num);
    return 1;
}

int main(){
    int sayi;
    printf("bir sayı giriniz: ");
    scanf("%d",&sayi);

    tekçift(sayi);
    //fonksiyon(sayi);

    return 0;
}




















   