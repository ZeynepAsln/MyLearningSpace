#include<stdio.h>
#define PI 3.14

int main()
{
	int r;
	float a;
	
	printf("Please enter r value:",r);
	scanf("%d",&r);
    
    a=(4/3.0)*PI*(r*r*r);
    printf("Kurenin hacmi %.2f'dir", a);
	
	
	return 0;
}
