#include<stdio.h>
int main()
{
	int num;
	int firstd;
	int lastd;
	int sum;
	
	printf("Please enter a value: ");
	scanf("%d",&num);
	
	lastd=num%10;
	
	printf("\nThe last digit is %d",lastd);
	
	while(num>10){
	num=num/10;
	}
	firstd=num;
	printf("\nThe first digit is %d",firstd);
	
	sum=firstd+lastd;
	
	printf("\nThe sum is %d",sum);
	
	
	return 0;
}
