#include<stdio.h>
int main()
{
	int i;
	int N;
	int sum;
	sum=0;
	
	printf("Please enter N value: ");
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
	sum=sum+i;
	printf("\n%d",sum );
	}
	
	return 0;
}
