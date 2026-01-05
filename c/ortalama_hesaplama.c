#include<stdio.h>
int main()
{
	int x,y;
	float mean;
	printf("Please enter x value:");
	scanf("%d",&x);
	printf("Please enter y value:");
	scanf("%d",&y);
	mean=(x+y)/2.;
	printf("mean(%d,%d)is %f",x,y,mean);
	return 0;
}
