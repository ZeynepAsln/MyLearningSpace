/*#include <stdio.h>
#include <stdlib.h>

int kare_alma(int num){  
    printf("Kare alma fonksiyonu\n");
    printf("%d\n", num*num);
    return num * num;    
}

int main(){
    int num ; 
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Karesi: %d\n", kare_alma(num));
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kup_alma(int yns){
    yns = pow(yns,3);

    return yns;
    printf("değer gönderiliyor...");
}

int main(){
    int num;
    printf("deger giriniz ? ");
    scanf("%d",&num);

    //int sonuc = kup_alma(num);

    printf("%d",kup_alma(num));
    return 0;
}














