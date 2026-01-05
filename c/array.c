#include<stdio.h>
int main(){
	int array1[4];
	int array2[4];
	int i;
	
	for(i=0;i<4;i++){
		printf("enter a value: ");
		scanf("%d",&array1[i]);
	}
	
	printf("\n");
	
	for(i=0;i<4;i++){
	    printf("%d ",array1[i]);
    }

    for(i=0;i<4;i++){
    	array2[i]=array1[i];
	}
	
	printf("\n");

    for(i=0;i<4;i++){
    	printf("%d ",array2[i]);
	}
	
	return 0;
}
