#include<stdio.h>
void digitsSum(int a,int b){
	
	b+=a%10;
	a/10;
	
	if(a==0)
    printf("%d",b);
	
	digitsSum(a,b);

}

int main(){
	int num,x;
	
	printf("enter a number: ");
	scanf("%d",&num);
	
    digitsSum(num,0);

	return 0;
}
