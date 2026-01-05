#include<stdio.h>
int max(int arr[],int a,int max1){
	if(a>=0){
		if(arr[a]>max1){
			max1=arr[a];
		}
		return max(arr,a--,max1);
	}
    return 0;
}

int min(int arry[],int n,int min){
	
	while(n>=0){
		if(arry[n]<min){
			min=arry[n];
		}
		n--;
	} 
	
	return min;
}

int main(){

	int x,y;
	
	printf("enter size of array: ");
	scanf("%d",&x);

	int array[x];
	
	for(y=1;y<=x;y++){
		printf("enter a value: ");
		scanf("%d",&array[y]);
	}
	
	printf("the max eleman of array %d ",max(array,x,0));
	
	printf("\nthe min eleman of array %d ",min(array,x,array[0]));
	
	return 0;
}
