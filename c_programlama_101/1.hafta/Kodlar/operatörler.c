#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int sayi1 = 10;
    int sayi2 = 20;

    printf("%d\n",sayi1+sayi2);
    printf("%d\n",sayi1-sayi2);
    printf("%d\n",sayi1*sayi2);
    printf("%d\n",sayi1/sayi2);
    printf("%d\n",sayi1%sayi2);

    sayi1++;
    sayi2--;

    printf("%d\n",sayi1);
    printf("%d\n",sayi2);

    printf("%d\n",sayi1<sayi2);
    printf("%d\n",sayi1>sayi2);
    printf("%d\n",sayi1==sayi2);
    printf("%d\n",sayi1!=sayi2);
    printf("%d\n",sayi1<=sayi2);
    printf("%d\n",sayi1>=sayi2);

    




    return 0;
}