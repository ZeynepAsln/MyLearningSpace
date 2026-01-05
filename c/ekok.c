#include<stdio.h>
int ekok(int firstd,int secondd,int i){
	int k;
	
	for(;i<=secondd;){
		firstd=firstd*i;
		for(k=1;secondd*k<=firstd;k++){
			secondd=secondd*k;
			if(firstd==secondd){
				return firstd;
			}
			else{
				secondd=secondd/k;
			}
		}
			firstd=firstd/i;
			ekok(firstd,secondd,i++);
	}
	return 0;
}

int main(){
	int num1,num2,x=0;
	
	printf("enter first number: ");
	scanf("%d",&num1);
	
	printf("enter second number: ");
	scanf("%d",&num2);
	
	x=ekok(num1,num2,1);
	
    printf("ekok: %d",x);
		
	return 0;
}
