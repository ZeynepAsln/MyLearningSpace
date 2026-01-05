#include<stdio.h>

void printEvenNumbers(int a,int b){
	
	if(a<=b){
		if(a%2==0){
			printf("\n%d",a);
		}
		printEvenNumbers(a+1,b);
	}
}

void printOddNumbers(int x,int y){
	
	if(x<=y){
		if(x%2!=0){
			printf("\n%d",x);
		}
		printOddNumbers(x+1,y);
	}
}

int main(){
	int firstd,lastd;
	int i;
	
	printf("enter lower limit: ");
	scanf("%d",&firstd);
	
	printf("enter upper limit: ");
	scanf("%d",&lastd);
	
	printf("choose show that odd or even numbers: [odd=3 , even=2] ");
	scanf("%d",&i);
	
	if(i==2){
		printEvenNumbers(firstd,lastd);
	}
	
	else if(i==3){
		printOddNumbers(firstd,lastd);
	}
	
	return 0;
}
