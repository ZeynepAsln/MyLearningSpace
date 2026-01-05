#include<stdio.h>
int main(){
	int array[4];
	int array2[5];
	int position=0;
	int element=0;
	int i;
	
	for(i=0;i<4;i++){
		printf("enter a value: ");
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<4;i++){
		printf("%d ",array[i]);
	}
	
	printf("\nInput element to insert: ");
	scanf("%d",&element);
	
	printf("\nInput position where to insert: ");
	scanf("%d",&position);
	
	for(i=0;i<4;i++){
		if((position-1)>i){
			array2[i]=array[i];
		}
		else {
			array2[i+1]=array[i];
		}
	}
	
	array2[position-1]=element;
	
	printf("\n");
	
	for(i=0;i<5;i++){
		printf("%d ",array2[i]);
	}
	
	return 0;
}
