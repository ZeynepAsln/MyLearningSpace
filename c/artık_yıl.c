#include<stdio.h>
void leap_year(int a){
	
	if(a%4==0){
		printf("\nit is a leap year\n\n");
	}
	else{
	    printf("\nit is not a leap year\n\n");	
	}
}

int main(){
	int x;
	int i=2;
	
	while(i>1){
	
	printf("Enter year number: ");
	scanf("%d",&x);
	
	leap_year(x);
    
	if(x%4==0){
		i--;
	}
	}
	
	return 0;
}
