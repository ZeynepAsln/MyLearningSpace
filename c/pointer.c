#include<stdio.h>
#include<string.h>
char *dondur(char *p,int x){
	int uzunluk=strlen(p);
	
	if(uzunluk<x){
		return NULL;
	}
	else{
		return p+x;
	}
	
}

int main(){
	char kelime[]="yazilim";
	int a;
	
	printf("enter a number: ");
	scanf("%d",&a);
	
	char *dizi=dondur(kelime,a);
	
	if(dizi==NULL){
		printf("NULL");
	}
	
	else {
		printf("%s",dizi);
	}
	
	return 0;
}
