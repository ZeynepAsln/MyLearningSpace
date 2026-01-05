#include<stdio.h>
void printNaturalNumbers(int lower,int upper){
	
	if(lower<=upper){
		printf("\n%d ",lower);
		printNaturalNumbers(++lower,upper);
	}
}

int main(){
	int lowerLimit,upperLimit;
	
	printf(" enter lower limit: ");
	scanf("%d",&lowerLimit);
	
	printf(" enter upper limit: ");
	scanf("%d",&upperLimit);

    printNaturalNumbers(lowerLimit,upperLimit);
		
	return 0;
}
