/*
#include <stdio.h>

int main() {
    int a[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Bir matrix giriniz: ");
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<2; i++){
        a[0][i] +=2;
        a[1][i] +=3;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>

int summ(int dizi[],int size, int i, int sum){

    if(i >= size){
        return sum;
    }

    else{
        sum += dizi[i];
        return summ(dizi,size, i+1, sum);
    }
}

int main() {
    int size;
    printf("Bir size gir: ");
    scanf("%d", &size);

    int dizi[size];
    printf("Bir dizi giriniz: ");
    for(int i=0; i<size; i++){
        scanf("%d", &dizi[i]);
    }

    int x = summ(dizi,size, 0, 0);

    printf("%d", x);

    return 0;
}
*/

/*
#include<stdio.h>

int ekok(int ilks,int ikincis,int i){
    for(;i<=ikincis;){
        ilks*=i;
        for(int j=1; ikincis*j<=ilks ;j++){
            ikincis*=j;
            if(ilks==ikincis){
                return ilks;
            }
            else{
                ikincis/=j;
            }
        }
        ilks/=i;
        return ekok(ilks,ikincis,i+1);
    }
}

int main(){
    int num1,num2;

    printf("birinci sayıyı giriniz: ");
    scanf("%d",&num1);

    printf("ikinci sayıyı giriniz: ");
    scanf("%d",&num2);

    int x= ekok(num1,num2,1);

    printf("ekok: %d",x);

    return 0;
}
*/