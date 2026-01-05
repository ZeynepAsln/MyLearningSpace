#include<stdio.h>
int main(){
	int dizi[4];
	int i;
	int secmax;
	int max;
	
	for(i=0;i<4;i++){
		printf("enter a value: ");
		scanf("%d",&dizi[i]);
	}
	
	max=dizi[0];
	for(i=0;i<4;i++){
		if(max<dizi[i]){
			max=dizi[i];
		}
	}
	
	secmax=dizi[0];
	
	for(i=0;i<4;i++){
		if(secmax<dizi[i]){
			if(max>dizi[i]){
				secmax=dizi[i];
			}
		}	
	}
	
	printf("\nsecond maximum value: %d ",secmax);
	
	return 0;
}
