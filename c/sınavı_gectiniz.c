#include<stdio.h>
int main()
{
	int note;
	printf("Lutfen sinav notunuzu giriniz:");
	scanf("%d",&note);
	
	if(note>100){
	printf("Not gecersizdir!");
	}
	
	else if(note>60){
	printf("Sinavi gectiniz!");
	}
	
	else{
	printf("Sinavi gecemediniz!");
	}
	
	return 0;
}
