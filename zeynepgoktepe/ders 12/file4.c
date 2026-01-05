#include<stdio.h>
#include<string.h>
int main(){
/*
    fopen("dosya_adı","mod");
    fclose(filep);
    fputc(karakter,filep);
*/

    char kelime[20]="c programlama";
    int uzunluk= strlen(kelime);

    FILE *filep = fopen("filekonusu.txt","w");
    
    if(filep==NULL){
        printf("bu dosya oluşturulamadı");
    }
    else{
        for(int i=0;i<uzunluk;i++){
            fputc(kelime[i],filep);
            printf("yazılan karakter: %c\n",kelime[i]);
        }
    }

    printf("dosya başarıyla yazdırıldı. ");
    fclose(filep);


    return 0;
}