#include<stdio.h>
int main()
{
	int num;
	int firstd;
	int lastd;
	
	printf("Enter a value: ");
	scanf("%d",&num);
	
	lastd=num%10;
	printf("\nThe last value is %d",lastd);
	
	while(num>10){
	num=num/10;
	}
	firstd=num;
	printf("\nThe first value is %d",firstd);
	
	
	return 0;
}
