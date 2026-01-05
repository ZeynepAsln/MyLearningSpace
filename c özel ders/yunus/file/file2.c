#include<stdio.h>
#include<string.h>
int main(){
    /*
    fopen("dosya_adi","mod");
    fclose(filep);
    fputc(character,filep);
    */

    char veri[25]="Yazilim Bilimi";
    int uzunluk = strlen(veri);
    int i;

    FILE *filep= fopen("yazilimbilimi.txt","w");
    if(filep== NULL){
        printf("dosya oluşturulamadı");
    }
    else{
        for(i=0;i<uzunluk;i++){
            fputc(veri[i],filep);
            printf("yazilan karakter %c\n",veri[i]);
        }
    }  

    printf("dosya basarıyla yazdırıldı");
    fclose(filep);
    
   return 0;
}