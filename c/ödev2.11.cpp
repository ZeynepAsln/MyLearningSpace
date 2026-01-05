#include<stdio.h>
int main()
{
	int num;
	int firstd;
	int lastd;
	
	printf("Please enter a value: ");
	scanf("%d",&num);

	lastd=num%10;
    
	printf("\nThe last digit: %d",lastd);
		
	printf("\nThe first digit: %1d",firstd);
	
	return 0;
}
