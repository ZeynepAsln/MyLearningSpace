#include<stdio.h>
void reverseInteger(int a){
	int i;
	
	if(a>0){
	i=a%10;
	printf("%d",i);
	
	reverseInteger(a/10); 
    }
}

int main(){
	int x;
	
	printf("enter an integer: ");
	scanf("%d",&x);
	
	reverseInteger(x);
	
	return 0;
}

