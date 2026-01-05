#include <stdio.h>

int main(){
/*
    int num1= 5; //4 byte yer kaplar.
    float num2= 5.5; //4 byte yer kaplar.
    double num3=7.34; // 8 byte yer kaplar.
    char num= 'A'; //1 byte yer kaplar.

    printf("num1: %d\n",num1);  
    printf("num2: %f\n",num2);
    printf("num3: %lf\n",num3);
    printf("num: %c\n",num);
*/

/*
    int sayi=6;
    printf("bir sayı giriniz: ");
    scanf("%d",&sayi);
    printf("%d\n",sayi);
 
    int a=1;
    int b=2;
    int c=3;

    int toplam;
    toplam = a+b;
    printf("%d\n",toplam);

    int çıkartma= c-a;
    printf("%d\n",çıkartma);

    int çarpma = a*b;
    int bölme = c/a; 
    int bölme2 = c/b;
    
    printf("bölme : %d\n",bölme);
    printf("%d\n",bölme2);

*/

/*
    if(toplam > 3){
       printf("toplam üçten büyüktür.");
    }

    else if(toplam<3){
       printf("toplam üçten küçüktür.");

    }

    else  {
      printf("toplam üçtür.");

    }

*/

/*
    int i=1;
    while(i<5){
        printf("%d\n",i);
        ++i;
    }


    for(int a=1 ; a<=5 ; a++){
        printf("%d\n",a);

    }


    int k=1;

    do{
        printf("%d\n",k);
        k++;
    }
    while(k<6);

*/

/*
    char harf='A';

    switch (harf){
     
        case 'A':
            printf ("A harfi yazıldı \n");
            break;
    
        case 'B':
            printf("B harfi yazıldı \n");
            break;

        case 'C':
            printf ("C harfi yazıldı \n");
            break;

    }
*/

/*
bool x = true;

printf("%d\n",x);
*/

int A,B,işlem,toplam,çıkarma;
toplam=0;
printf("A ve B değerlerinden bir tanesini yazınız");
scanf("%d",&A);
scanf("%d",&B);
printf("yapmak istediğiniz işlemi seçiniz");
scanf("%d",&işlem);

switch(işlem){
    case 1:
    toplam=A+B;
    printf("%d/n",toplam);
    break;

    case 2:
    çıkarma= A-B;
    printf("%d/n",çıkarma);
    break;
}


    return 0;
} 