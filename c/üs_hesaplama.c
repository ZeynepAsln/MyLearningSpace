#include<stdio.h>
int pow(int a,int b){
	
	if (b==1) return 1;
	if (b<0) return 1/pow(a,-b);
	return a*pow(a,b-1);

}

int main(){
	int x,y;
	int z=0;
	
	printf("enter a number: ");
	scanf("%d",&x);
	
	printf("enter numbers pow: ");
	scanf("%d",&y);
	
	z=pow(x,y);
	
	printf("%d ^ %d = %d",x,y,z);
	
	return 0;
}
