#include<stdio.h>
int ebob(int firstd,int secondd){
	
	int i;
	
	for(i=firstd;i>0;i--){
		if(firstd%i==0){
			if(secondd%i==0){
				return i;
			}
		}
	}
}

int main(){
	int num1,num2;
	
	printf("enter first number: ");
	scanf("%d",&num1);
	
	printf("enter second number: ");
	scanf("%d",&num2);
	
    printf("ebob: %d",ebob(num1,num2));
		
	return 0;
}
