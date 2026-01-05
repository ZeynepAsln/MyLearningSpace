//dizinin toplam�n� bulma
#include<stdio.h>
int main()
{
	int firstd;
	int lastd;
	int fark;
	int toplam;
	int i=0;
	int terim;
	
	printf("\nEnter first value: ");
	scanf("%d",&firstd);
	
	printf("\nEnter last value: ");
	scanf("%d",&lastd);
	
	printf("\nsayilarin farkini giriniz: ");
	scanf("%d",&fark);

    terim=(firstd+lastd)/fark+1;
	
	i=(firstd+lastd)*(lastd-firstd+fark)/(2*fark);	
	 
	printf("\nDizinin toplami: %d",i);
	
	printf("\n\n%d",firstd); 
	
	while(firstd!=lastd){
		firstd+=fark;
		printf("\n%d",firstd);
	}
	
    return 0;
}
