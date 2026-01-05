#include<stdio.h>
int main()
{
	int vize1,vize2,final;
	float ort;
	printf("Birinci vize notunu giriniz:");
	scanf("%d",&vize1);
	printf("�kinci vize notunu giriniz:");
	scanf("%d",&vize2);
	printf("Final notunu giriniz:");
	scanf("%d",&final);
	
	ort=(vize1*3/10)+(vize2*3/10)+(final*4/10);
	if(ort>59){
	printf("Dersi gectiniz!");
	}
	else if(ort<59&&ort>49){
	printf("Bute kaldiniz!");
	}
	else{                  	
	printf("Dersten kaldiniz!");
	}
	
	return 0;
}