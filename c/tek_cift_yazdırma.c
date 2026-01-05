#include<stdio.h>
void printEvenOdd(int a,int b){
	
	if(a<=b){
		if(a%2!=0)
		printf("\n%d ",a);
		printEvenOdd(a+1,b);
	}
}

int main(){
	int lower,upper;
	
	printf("enter lower limit: ");
	scanf("%d",&lower);
	
	printf("enter upper limit: ");
	scanf("%d",&upper);
	
	printEvenOdd(lower,upper);
	
	return 0;
}
