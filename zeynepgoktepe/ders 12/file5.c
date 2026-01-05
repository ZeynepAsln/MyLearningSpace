#include<stdio.h>
int main(){

    FILE *filep;
    char text[50];
    filep = fopen("yazdır.txt" , "w");

    if(filep==NULL){
        printf("dosya oluşturulmadı");
    }
    else{
        printf("bir kelime giriniz: ");
        fgets(text,50,stdin);
        fputs(text,filep);
        printf("dosyaya yazıldı");
        fclose(filep);

    }

    return 0;
}
