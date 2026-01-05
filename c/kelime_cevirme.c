#include<stdio.h>
#include<string.h>

void terscevir(char kelime[]){
	
	int uzunluk=0,x;
	char t;
	
	uzunluk=strlen(kelime);
	
	for(x=0;x<(uzunluk/2);x++){
	    t=kelime[x];
		kelime[x]=kelime[uzunluk-1-x];
		kelime[uzunluk-1-x]=t;	
	}
	
}

int main(){
	
    char dizi[30];

    printf("enter a word: ");
    scanf("%s",dizi);
    
    terscevir(dizi);
    printf("%s ",dizi);
	
	return 0;
}
