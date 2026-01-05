#include<stdio.h>
int main()
{
	int num;
	int lastd;
	int product=1;
	
	printf("Enter a value: ");
	scanf("%d",&num);
	
	while(num!=0){
	lastd=num%10;
    if(lastd==0){
	product=product;
	num=num/10;
	}
	else{
	product=product*lastd;
	num=num/10;
	}
	}
	
	printf("The product: %d",product);
	
	return 0;
}
