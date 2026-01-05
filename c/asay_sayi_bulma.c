#include<stdio.h>
int asalmi(int sayi){
	int i;
	for (i=2;sayi>i;i++){
		if(sayi%i==0){
		return 0;
		}
	}
	return 1;
}

int main(){
	int x;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&x);
    if(asalmi(x)==0){
    	printf("Bu bir asal sayi degildir!!");
	}
	else{
		printf("Bu bir asal sayidir.");
	}
	return 0;
	
}
