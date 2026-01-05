#include<stdio.h>
void bes(int a,int b,int x){
	
	if(a<=b+1){
	    if(a%5==0){
		x+=a;
	    }
	    bes(++a,b,x);
    }
    
	if(a==b+1){
    	printf("%d ",x);
	}
}

int main(){
	
	int ilkd,sond;
	int x=0;
	
	printf("enter your first digit= ");
	scanf("%d",&ilkd);
	
	printf("enter your last digit= ");
	scanf("%d",&sond);
	
    bes(ilkd,sond,x);	
	
	return 0;
}
