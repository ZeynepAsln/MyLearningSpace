#include<stdio.h>
#include <stdbool.h>
int main(){
    /*
    int sayı=5; //4 byte yer kaplar.
    float sayı2= 5.5 ;//4 byte yer kaplar.
    double sayı3= 7.345; //8 byte yer kaplar.
    char harf='A'; //1 byte yer kaplar.

    printf("sayımız: %d\n",sayı);
    printf("sayı 2: %.2f\n",sayı2);
    printf("sayı 3: %lf\n",sayı3);
    printf("harf: %c\n",harf);

    int sayı4;
    printf("bir sayı giriniz: ");
    scanf("%d",&sayı4);

    printf("sayı 4 : %d\n",sayı4);
    */
    /*
    int a=1;
    int b=2;
    int c=3;

    int toplam;
    toplam = a+b;
    printf("toplam= %d\n",toplam);

    int çıkarma= c-a;
    printf("fark= %d\n",çıkarma);
    
    int çarpma= a*b;
    int bölme= c/a;
    int bölme2= c%b;

    printf("çarpma= %d\n",çarpma);
    printf("bölme= %d\n",bölme);
    printf("bölme2= %d\n",bölme2);


   if(toplam>3) {
        printf("toplam üçten büyüktür.");
    }

    else if(toplam<3){
        printf("toplam üçten küçüktür.");
    }

    else{
        printf("toplam üçtür.");
    }
    */
    /*
    int i=1;
    
    while(i<5) {
    printf("%d\n",i);
    i++;
    }

    for(int a=1 ; a<5 ; a++){
        printf("%d\n",a);
    }

    int k=1;

    do{
        printf("%d\n",k);
        k++;

    }
    while(k<=5);
    */
    /*
    char harf = 'C';

    switch(harf){
        case 'A':
            printf("A harfi girildi.\n");
            break;

        case 'B':
            printf("B harfi girildi.\n");
            break;
        
        case 'C':
            printf("C harfi girildi.\n");
            break;
    }
    */

    bool x = false;
    printf("%d\n", x);
   /*

    int x;
    printf("bir sayı gir: ");
    scanf("%d",&x);

    int y;
    printf("ikinci sayıyı gir: ");
    scanf("%d",&y);

    int toplam=x+y;
    printf("%d\n",toplam);

    */  
/*
    int a;
    printf("bir sayı girin: ");
    scanf("%d",&a);

    int b;
    printf("ikinci sayıyı giriniz: ");
    scanf("%d",&b);

    int işlem;
    printf("1=toplama , 2=çıkarma , 3=çarpma , 4=bölme\n");
    printf("işlemi seçiniz: ");
    scanf("%d",&işlem);

    int sonuç=0,sonuç2=1;

    if(işlem>4 || işlem<1){
        printf("geçerli bir sayı giriniz.");
    }


    switch(işlem){
        case 1:
            sonuç=a+b; 
            printf("toplam= %d",sonuç);
            break;
        case 2:
            if(a>b){
                sonuç=a-b;
            }
            else{
                sonuç=b-a;
            }
            printf("fark= %d",sonuç);
            break;
        case 3:
            sonuç2=a*b;
            printf("çarpma= %d",sonuç2);
            break;
        case 4:
            if(a>b){
                sonuç2=a/b;
            }
            else{
                sonuç2=b/a;
            }
            printf("bölme= %d",sonuç2);
            break;
    }
*/
    return 0;
}