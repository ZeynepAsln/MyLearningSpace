#include<stdio.h>
int main()
{
	int num;
	int sum=0;
	int i;
	
	printf("Please enter input number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		if(num%i==0){
			printf("%d ",i);
			sum=sum+i;
		}
	}
		printf("\nsum:%d",sum);
			if(sum==num*2){
		printf("\nit is a perfect number");
	}
	else{
		printf("\nit is not a perfect number");
	}
	
	return 0;
}
