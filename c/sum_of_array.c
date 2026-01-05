#include <stdio.h>
int sumarray(int arr[],int start,int end,int sum){

    sum+=arr[start];
    
	if(start>=end){
    	return sum;
	}
	else{
		sumarray(arr,start+1,end,sum);
	}
}

int main(){

	int x,y,z=0;
	
	printf("enter size of array: ");
	scanf("%d",&x);

	int array[x];
	
	for(y=1;y<=x;y++){
		printf("enter a value: ");
		scanf("%d",&array[y]);
	}
		
	z=sumarray(array,0,x,0);	
		
	printf("%d",z);
		
	return 0;
}
