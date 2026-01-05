#include<stdio.h>
#include<string.h>

int sayac(char kelime[]){
	
	int x,uzunluk=0;
	
	for(x=0;kelime[x]!='\0';x++){
		uzunluk++;
	}
	
	return uzunluk;
}

int main(){
    
	char kelime[30];
		
	printf("enter a word: ");
	scanf("%s",kelime);

    printf("%d",sayac(kelime));
	
	return 0;
}
