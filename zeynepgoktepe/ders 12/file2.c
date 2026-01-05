#include<stdio.h>
int main(){
 
    FILE *filep = fopen("cprogramlama.txt","w");

    if( filep== NULL){
        printf("dosya oluşturulamadı");
    }
    else{
        printf("dosya oluşturuldu");
    }


    return 0;
}