#include <stdio.h>

void degistir(int a, int b){
    a+=5;
    b+=a;
    printf("%d %d\n",a,b);
}
int toplam(int a , int b){
    a*=2;
    b-=a;
    return a+b;
}
int main(){
    int a = 3 , b=7;
    degistir(a,b);
  
    int Result = toplam(a,b);
    printf("Result: %d \n",Result);


    return 0;
}
