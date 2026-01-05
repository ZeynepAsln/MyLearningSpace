#include<stdio.h>
int main()
{
	int num;
	int reverse=0;
	int lastd;
	
	printf("Enter a value: ");
	scanf("%d",&num);
	
	while(num!=0){
	lastd=num%10;
    reverse=reverse*10;
	reverse=reverse+lastd;
	num=num/10;
	}
	
	printf("\nThe reverse: %d",reverse);
	
	return 0;
}
