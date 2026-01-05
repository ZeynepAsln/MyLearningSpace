#include<stdio.h>
int main()
{
	int x;
	int n=0;
	
	printf("Enter a value: ");
	scanf("%d",&x);
	
	n=x*x;
	n=n*x;
	
	printf("\nSayinin kubu: %d",n);
	
	return 0;
}
