#include<stdio.h>

int digit(int sayi,int sum){
	
	if(sayi>0){
	sum=sum+(sayi%10);
	sayi=sayi/10;
	digit(sayi,sum);
	}
    else{
	    return sum;
    }
}

int main(){
	int x,y=0,z=0;
	
	printf("enter a number: ");
	scanf("%d",&x);
	
	y=digit(x,z);
	
	printf("\nSum of digits: %d",y);
	
	return 0;
}
