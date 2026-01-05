#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int kare_alma(int sayı){
    printf("kare alma fonksiyonuna girdiniz.\n");
    printf("%d\n",sayı*sayı);
    return sayı*sayı;
}

int main(int sayı){

    int number;
    printf("bir sayı giriniz: ");
    scanf("%d",&number);

    kare_alma(number);
    printf("Sayının karesi: %d\n",kare_alma(number));

    return 0;
}*/

/*
int kup_alma(int sayı2){
    sayı2= pow(sayı2,3);
    return sayı2;
}

int main(){
    int num;
    printf("bir değer giriniz: ");
    scanf("%d",&num);

    printf("%d",&num);
    printf("%d",kup_alma(num));

    return 0;
}
*/

/*
int faktoriyel(int n){

    if(n==0 || n==1){
        return 1;
    }
    else{
        return n* faktoriyel(n-1);
    }
}

int main(){

    int sayı;
    printf("bir sayı giriniz: ");
    scanf("%d",&sayı);

    printf("%d sayısının faktoriyeli: %d\n",sayı,faktoriyel(sayı) );

    return 0;
}
*/

/*
int toplam(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10) + toplam(n/10);
    }
}

int main(){
    int sayı;
    printf("bir sayı giriniz: ");
    scanf("%d",&sayı);

    printf("%d sayısının rakamları toplamı: %d\n",sayı,toplam(sayı));
    
    return 0;
}
*/

/*
#define pi 3.14

float daire(int r){
    float alan;
    alan= pi*r*r;
    return alan;
}

int main(){
    int num;
    printf("bir sayı giriniz: ");
    scanf("%d",&num);

    float sonuç;
    sonuç=daire(num);
    printf("%f",sonuç);

    return 0;
}
*/

/*
int main(){
    int c=10;
    int *p;

    p=&c;

    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",c);
    printf("%d\n",&c);

    int *k;
    int b;
    b=20;

    k=&b;

    printf("%d\n",*k);
    printf("%d\n",k);
    printf("%d\n",b);
    printf("%d\n",&b);

    return 0;
}
*/

/*
int main(){
    int *a1, *a2;
    int n=10,p=20;

    a1=&n;
    a2=&p;

    printf("%d %d",*a1,*a2);

    *a1= *a2+2;

    printf("\n\n\n");
    printf("%d",*a1);

    return 0;
}
*/


void değiştir(int *a1,int *a2){
    int temp;
    temp=*a1;
    *a1=*a2;
    *a2=temp;
}

int main(){
    int a=15,b=25;
    printf("%d %d",a,b);

    değiştir(&a,&b);

    printf("\n\n\n");
    printf("a= %d  , b= %d ",a,b);

    return 0;
}
