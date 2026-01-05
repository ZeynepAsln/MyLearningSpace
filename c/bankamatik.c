
#include<stdio.h>
int main()
{
	int bakiye=1000;
	int tutar;
	int islem;

while(1)	{

	printf("Bakiyeniz: %d\n",bakiye);
	printf("Yapilacak islemi seciniz:\n1:Para cekme\n2:Para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n");

    printf("Islemi seciniz:");
	scanf("%d",&islem);
	
	switch(islem){
	case 1:
	printf("Cekmek istediginiz tutari giriniz:");
	scanf("%d",&tutar);
    
	if(tutar>bakiye){
    printf("Bakiyeniz yetersizdir!");
	}
	bakiye-=tutar;
	printf("Bakiyeniz: %d",bakiye);
	break;
	
	
	case 2:
	printf("Yatirmak istediginiz tutari giriniz:");
	scanf("%d",&tutar);
    bakiye+=tutar;
    printf("Bakiyeniz: %d",bakiye);
    break;
    
    case 3:
    printf("Havale yapmak istediginiz tutari giriniz:");
	scanf("%d",&tutar);
    
	if(tutar>bakiye){
    printf("Bakiyeniz yetersizdir!");
	}
	else{
	bakiye-=tutar;
	printf("Bakiyeniz: %d",bakiye);
    }
	break;

	case 4:
	printf("Bakiyeniz: %d",bakiye);
	break;
	
	case 5:
	printf("Kartiniz iade edilmistir");
	break;
	
	default:
	printf("Islem gecersizdir!");
	break;
}
	printf("\n\n");
}
	return 0;
}
