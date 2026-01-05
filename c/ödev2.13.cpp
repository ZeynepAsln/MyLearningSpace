#include<stdio.h>
int main()
{
	int num;
	int lastd;
	int sum=0;
	
	printf("Enter a value: ");
	scanf("%d",&num);
	
	while(num>0){
	lastd=num%10;
	sum=sum+lastd;
	num=num/10;
	}
	
	printf("\nThe sum: %d",sum);
	
	return 0;
}
