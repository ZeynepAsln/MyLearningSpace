#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int i;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("\nEnter second number: ");
	scanf("%d",&num2);
	
	for(i=2;i!=num1,num2;i++){
		if(num1%i==0&&num2%i==0){
			printf("\n\nsayilar aralarinda asal degil!!");
			printf("\n%d sayisina tam bolunurler",i);
			break;
		}
	}	
	
	return 0;
}
