#include<stdio.h>
int main()
{
	int x;
	int toplam;
	
	for(x=0;1;x++){

	printf("\n\nSayiyi giriniz:\nCikmak icin -1 basiniz\n\n");
	scanf("%d",&x);
	toplam+=x;
	
	if(x==-1){
	break;
	}
	
	}
	
	printf("\nToplam: %d",toplam);
	
	return 0;
}
