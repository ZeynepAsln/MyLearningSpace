#include<stdio.h>
int main(){

    FILE *filep= fopen ("cprogramlama.txt","r");

    if(filep==NULL){
        printf("böyle bir dosya yok");
    }
    else{
        printf("böyle bir dosya var");
    }


    return 0;
}