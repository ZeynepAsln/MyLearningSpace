#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;

    for(int j = 0; j < 10; j++){   //istersek j yi burada tanımlayabiliriz
        printf("j: %d\n", j);
    }
    for(int j = 20; j > 10; j--){   //bu şekilde azaltarak da yapabiliriz
        printf("j: %d\n", j);
    }

    while (i < 10){
        printf("i: %d\n", i);
        i++;   //arttırma da yapılabilir
    }

    i=10;
    while(i > 0){
        printf("i: %d\n", i);
        i--;  //azaltma da yapılabilir , siz neye ihtiyaç duyarsanız.
    }

    i=0;
    do{
        printf("i: %d\n", i);
        i++;
    } while (i>10); //do while döngüsü en az bir kere çalışır.
    


    /*Sonsuz döngü örnekleri:
    while(1){
        printf("Sonsuz döngü\n");
    }

    for(;;){
        printf("Sonsuz döngü\n");
    }

    for(int i = 0; i < 10; i--){
        printf("Sonsuz döngü\n");
    }
    */



    //break ve continue


    for(int i = 0; i < 10; i++){
        if(i == 5){
            break;  //döngüyü sonlandırır
        }
        printf("i: %d\n", i);
    }


    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;  //döngüyü sonlandırmaz, sadece o adımı atlar
        }
        printf("i: %d\n", i);
    }

    

    return 0;
}