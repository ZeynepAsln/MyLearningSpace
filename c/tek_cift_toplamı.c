#include<stdio.h>
void sumOfEvenOdd(int start,int end,int sumO,int sumE){
	
	if(start<=end){
		if(start%2==0){
			sumE+=start;
		}
		else{
			sumO+=start;
		}
		sumOfEvenOdd(start+1,end,sumO,sumE);
	}	
	
	if(start+1==end){
		printf("sum= (odd) %d      (even) %d",sumO,sumE);
	}
}

int main(){
	int start,end;
	int sumO=0,sumE=0;
	
	printf("enter lower limit: ");
	scanf("%d",&start);
	
	printf("enter upper limit: ");
	scanf("%d",&end);
	
	sumOfEvenOdd(start,end,sumO,sumE);
	
	return 0;
}
