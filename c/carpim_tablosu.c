#include<stdio.h>
int main()
{
	int x;
	int y;
	int z;
	
	for(x=0 ; x<11 ; x++){
	
	for(y=0 ; y<11 ; y++){
	z=x*y;
	printf("%d.%d=%d\n\n",x,y,z);
	}
	
	}
	
	return 0;
}
