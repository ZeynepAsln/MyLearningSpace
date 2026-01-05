#include <stdio.h>
int main(){
    FILE *filep;
    char text[200];
    filep= fopen("yaz.txt","a");

    if(filep == NULL){
        printf("dosya oluşturulmadı");
    }
    else{
        printf("bir şey yazın: ");
        fgets(text,200,stdin);
        fputs(text,filep);
        printf("dosyaya yazıldı");
        fclose(filep);
    }

    return 0;
}