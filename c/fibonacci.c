#include<stdio.h>
int main()
{
	int x;
	int bir=1;
	int iki=1;
	int y;
	printf("%d\n%d\n",bir,iki);

	for(x=1 ; x<20 ; x++){
   
    y=iki;
    iki+=bir;
    bir=y;
    printf("%d\n",iki);
	}
	
	return 0;
}
