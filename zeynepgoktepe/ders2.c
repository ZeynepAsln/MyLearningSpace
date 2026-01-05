#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
/*
    char harf = 'A';
    printf("%c\n",harf);
    printf("%d\n",harf);

    char harf2 = 'c';
    printf("%d\n",harf2);

    char harf3='0';
    printf("%d\n",harf3);

    for(int i=65 ; i<91 ; i++){
      //printf("%d\n",i);
        printf("%c\n",i);
    }
    
    printf("%.2f\n",ceil(4.3)); // 5 - kendinden büyük en küçük tam sayı
    printf("%f\n",floor(4.9)); //4- kendinden küçük en büyük tam sayı
    printf("%f\n",sqrt(64)); // karekök alma fonksiyonu
    printf("%f\n",pow(8,2)); // üs alma fonksiyonu
    printf("%d\n",abs(-15)); // mutlak değer alma fonksiyonu

    int a=5;
    int sayılar[5]={10,20,30,40,50};
    printf("%d\n",sayılar[0]);

    char harfler[5]={'A','B','C','D','E'};
    printf("%c\n",harfler[0]);
    printf("%d\n",harfler[4]);

    float ondalık[4]={1.1,2.2,3.3,4.4};
    printf("%.2f\n",ondalık[2]);

    for(int i=0;i<=4;i++){
        printf("%d\n",sayılar[i]);
    }

    for(int a=0;a<5;a++){
        printf("%c\n",harfler[a]);
    }

    for(int b=0;b<4;b++){
        printf("%f\n",ondalık[b]);
    }
*/

    int array[5];

    for(int i=0;i<5;i++){
        printf("dizinin %d.elemanını giriniz",i+1);
        scanf("%d",&array[i]);
    }

    int k=0;
  
/*
    while(k<5){
        printf("dizinin %d.elemanı: %d\n",k+1,array[k]);
        k++;
    }
*/  
 
    do{
        printf("dizinin %d.elemanı: %d\n",k+1,array[k]);
        k++;
    }
    while (k<5);

    return 0;
}