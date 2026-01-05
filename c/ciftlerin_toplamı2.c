#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	
	for(i=1;i<=10;i++){
		if(i%2==1){
			continue;
		}
		sum=sum+i;
	}
	
	printf("%d",sum);
	
	return 0;
}
