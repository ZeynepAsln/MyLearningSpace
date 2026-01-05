#include<stdio.h>
int faktoriyel(int sayi,int sum){
	
	sum=sum*sayi;
	sayi=sayi-1;
	if(sayi!=0){
		faktoriyel(sayi,sum);	
	}
	else{
		return sum;
	}
}

int main(){
	int x,y=1;
	
	printf("enter a number: ");
	scanf("%d",&x);
	
	printf("\n%d",faktoriyel(x,y));
	
	return 0;
}
