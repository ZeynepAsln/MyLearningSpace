#include<stdio.h>
int reverse(int a,int b){
	int c;
	
	while(a>0){
	b=(b*10)+(a%10);
    a=a/10;
	c=a;
	reverse(c,b);
	}
		
	return b;
}

int main(){
	int x,y=0,z=0;
	
	printf("enter a number: ");
	scanf("%d",&x);
	
	reverse(x,z);

    y=reverse(x,z);
    
    if(x==y){
    	printf("%d is a palindrom number ",x);
	}
	
	else{
		printf("%d is not a palindrom number ",x);
	}

	return 0;
}
