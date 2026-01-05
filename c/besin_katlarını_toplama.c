#include<stdio.h>
int main(){
	int ilkd,sond;
	int i,a=0;
	
	printf("enter your first digit= ");
	scanf("%d",&ilkd);
	
	printf("enter your last digit= ");
	scanf("%d",&sond);
	
	for(i=ilkd;i<=sond;i++){
		if(i%5==0){
			a+=i;
		}
		
	}
	
	printf("%d ",a);
	
	return 0;
}
