#include<stdio.h>
int main()
{
	int i;
	int N;
	int sum;
	sum=0;
	
	printf("Pelase enter N value: ");
	scanf("%d",&N);
	
	for(i=1;i<=N;i+=2){
	if(i%2!=0){
	sum=sum+i;
	printf("\n%d",sum);
	}
	}
	
	return 0;
}
