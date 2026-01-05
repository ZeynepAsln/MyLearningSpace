#include<stdio.h>
int fibo(int num){
	
	if(num==0){
		return 0;
	}
	else if(num==1){
		return 1;
	}
	else {
		return fibo(num-1)+fibo(num-2);
	}
}

int main(){
	int x;
	
	printf("enter a number: ");
	scanf("%d",&x);
	
	printf("\n%d",fibo(x));
	

	return 0;
}