#include<stdio.h>
int main()
{
	int num;
	int reverse=0;
	int lastd;
	int temp;
	
	printf("Enter a value: ");
	scanf("%d",&num);
	
	temp=num;
	
	while(num!=0){
	lastd=num%10;
	reverse=reverse*10;
	reverse=reverse+lastd;
	num=num/10;
	}
	
	if(reverse==temp){
	printf("\nIt is a palindrome number");	
	}
	else{
	printf("\nIt is not a palindrome number");
	}
	
    return 0;
}
