#include<stdio.h>
int main()
{
	/*
	say�n�n rakamlar� toplam�n� ve ka� haneli oldu�unu bul
	*/
	int x=0;
	int hane=0;
	int toplam=0;
	
	printf("Please enter x value:");
	scanf("%d",&x);
	
	do{
	toplam = toplam+x%10;
	
	hane++;
	x =x/10;
	}
	while(x>0);
	
	printf("Sayinin rakamlari toplami %d'dir\n",toplam);
	
	printf("Sayi %d hanelidir\n",hane);
	
	return 0;
}
