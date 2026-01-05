#include<stdio.h>
int main()
{
	float sayilar[5];
	int i;
	float toplam=0.0;
	
	for(i=0 ; i<5 ; i++){
		printf("Bir sayi giriniz: ");
		scanf("%f",&sayilar[i]);
		toplam+=sayilar[i];
	}
	
	toplam=toplam/5;
		printf("Girdiginiz sayilarin ortalamasi %.2f dir",toplam);
	
	return 0;
	
}
