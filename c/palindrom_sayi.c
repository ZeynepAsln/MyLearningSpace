#include<stdio.h>
int reverseInteger(int a,int b){
	int i,k,l;
	
	while(a>0){
	i=a%10;
	b=b*10+i;
	a=a/10;
    k=a;
	}
    if(a==0){
    printf("\n%d ",b); 
    }
	else{
		reverseInteger(k,b);
	}
return b;
}

int main(){
	int x,y=0;

	printf("enter an integer: ");
	scanf("%d",&x);
	
	y=reverseInteger(x,0);
	
	if(x==y){
		printf("\n%d is palindrome number",x);
	}
	
	else{
		printf("\n%d is not palindrome number",x);
	}
	
	return 0;
}
