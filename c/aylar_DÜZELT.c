#include<stdio.h>
int main()
{
		char x;
	printf("Please enter a month:");
	scanf("%c",&x);
	if(x== 'jenuary // x==march // x==may // x==july // x==august // x==october // x==december' ) {
	printf("%c is 31",x);
}
	else if(x=='april //x==june // x==september // x==november' )
	{
	printf("%c is 30",x);
	}
	  else if(x=='february'){
		printf("%c is 28",x);
	}
    else {
    	printf("%c is not a month",x);
	}
	
	return 0;
}

