#include <stdio.h>
#include <stdlib.h>
/*
void toplama(int *num1, int *num2) {
    return *num1 + *num2;
}

void cikarma(int *num1, int *num2) {
    return *num1 - *num2;
}

void carpma(int *num1, int *num2) {
    return *num1 * *num2;
}

void bolme(int *num1, int *num2) {
    return *num1 / *num2;
}

int main() {
    int m, n, islem;

    printf("Lutfen bir deger giriniz: ");
    scanf("%d ", &m);
    printf("Lutfen bir deger giriniz: ");
    scanf("%d ", &n);

   
    printf("Lutfen istediginiz islemi secin (1-4): ");
    scanf("%d", &islem);

        if (islem == 1) {
            printf("%d ",toplama(&m, &bn));
        } else if (islem == 2) {
            if(m>n){
                printf("%d ",cikarma(&m, &n));
            }
            else{
                printf("%d ",cikarma(&n, &m));
            }
            
        } else if (islem == 3) {
            printf("%d ",carpma(&m, &n));
        } else if (islem == 4) {
            if(m>n){
                printf("%d ",bolme(&m, &n));
            }
            else{
                printf("%d ",bolme(&n, &m));
            }
            
        } 
        else {
            printf("Gecersiz deger! Lutfen 1 ve 4 arasinda bir deger giriniz.\n");
        }
    

    return 0;
}
*/

/*
void kopyala(char *array1, char *array2){
    while(*array1!='\0'){
        *array2 = *array1;
        array1++;
        array2++;
    }
}

int main(){
    char array1[100];
    char array2[100];

    printf("bir kelime giriniz: ");
    scanf("%s",&array1);

    kopyala(array1,array2);

    printff("%s",array2);

    return 0;
}
*/

/*
int uzunluk(char array1){
    int sonuc = 0;
    do{
        sonuc++;
        array1++;
    }
    while(array1 != '\0');

    return sonuc;
}

int main(){
    char array1[100];
    printf("Bir kelime giriniz: ");
    scanf("%s", &array1);

    printf("%d", uzunluk(array1));

    return 0;
}
*/

/*
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n;
    printf("bir sayı giriniz: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d ",fibonacci(i));
    }

    return 0;
}
*/
