#include<stdio.h>
int main()
{
	int lastn;
	int i=0;
	int sum=0;
	
	printf("Enter a value: ");
	scanf("%d",&lastn);
	
	while(i<=lastn){
		if(i%2==0){
			sum=sum+i;
		}
		else{
			sum=sum;
		}
		i++;
	}
	
	printf("\ncift sayilarin toplami %d",sum);
	
	
	return 0;
}
