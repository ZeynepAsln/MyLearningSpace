#include <stdio.h>
#include <stdlib.h>

int main(){
    int gün;
    printf("Haftanın kaçıncı günü? ");
    scanf("%d",&gün);

    switch (gün)
    {
    case 1:
        printf("Pazartesi");
        break;
    case 2: 
        printf("Salı");
        break;
    case 3:
        printf("Çarşamba");
        break; 
    case 4: 
        printf("Perşembe");
        break;
    case 5:
        printf("Cuma");
        break;
    case 6:
        printf("Cumartesi");
        break; 
    case 7:
        printf("Pazar");
        break;
    default:
        printf("Hatalı giriş yaptınız.");
        break;
    }
    return 0;
}