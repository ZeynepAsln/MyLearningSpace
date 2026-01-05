#include<stdio.h>
int main()
{
	int num;
	int digit;
    num=digit=0;
     
    printf("Please enter a value: ");
	scanf("%d",&num );
	
	for (digit=0;num!=0;digit++){

    num = num/10;
	}
	
	printf("Digit number: %d",digit);
	
	
	return 0;
}
