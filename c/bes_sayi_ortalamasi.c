#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float x;
	printf("5 say� giriniz:");
	scanf("%d %d %d %d %d" ,&a,&b,&c,&d,&e);
	
	x=(a+b+c+d+e)/5;
	printf("ortalama deger %.2f'tir",x);

	
	
	return 0;
}
