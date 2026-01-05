#include<stdio.h>
int main(){
	int dizi[10];
	int i;
	int sum=0; 
	
	for(i=1;i<11;i++){
	printf("enter a value: ");
	scanf("%d",&dizi[i]);
}

    for(i=1;i<11;i++){
    	sum+=dizi[i];
	}
    sum=sum/2;
	printf("sum= %d",sum);
    
	return 0;
}
