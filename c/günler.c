#include<stdio.h>
char *gun(char *gundizisi[],int gunsayisi, int a ){
	
	if(a<=7 && a>=1){
		return gundizisi[a-1];
	}
	else {
		return NULL;
	}
}

int main(){
	char *gunler[7]={"pazartesi", "sali","carsamba","persembe","cuma","cumartesi","pazar"};
	
	int x;
	printf("enter day number: ");
	scanf("%d",&x);
	
	char *p = gun(gunler,7,x);
	
	if(p == NULL){
		printf("Null");
	}
	else{
		printf("%s",p);
	}
	
	
	return 0;
}
