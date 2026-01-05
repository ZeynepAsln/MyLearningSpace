#include<stdio.h>
int main(){
	int dizi[5];
	int i;
	int max,min;
	
	for(i=0;i<5;i++){
		printf("enter a value: ");
		scanf("%d",&dizi[i]);
	}
	
	max=dizi[0];
	min=dizi[0];
	
	for(i=0;i<5;i++){
		if(max<dizi[i]) 
		max=dizi[i];
	}
	
	for(i=1;i<6;i++){
		if(min>dizi[i])
		min=dizi[i];
	}
	
	printf("max= %d , min= %d ",max,min);
	
	return  0;
}
