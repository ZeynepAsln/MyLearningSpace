#include<stdio.h>
int main(){
	int sayilar[10];
	int i;
	
	    printf("enter a value: ");
		scanf("%d",&sayilar[1]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[2]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[3]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[4]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[5]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[6]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[7]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[8]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[9]);
		
		printf("enter a value: ");
		scanf("%d",&sayilar[10]);
	
	for(i=1;i<11;i++){
		if(sayilar[i]==0) printf("\nsifir",sayilar[i]);
		else if(sayilar[i]==1) printf("\nbir",sayilar[i]);
		else if(sayilar[i]==2) printf("\niki",sayilar[i]);
		else if(sayilar[i]==3) printf("\nuc",sayilar[i]);
		else if(sayilar[i]==4) printf("\ndort",sayilar[i]);
		else if(sayilar[i]==5) printf("\nbes",sayilar[i]);
		else if(sayilar[i]==6) printf("\nalti",sayilar[i]);
		else if(sayilar[i]==7) printf("\nyedi",sayilar[i]);
		else if(sayilar[i]==8) printf("\nsekiz",sayilar[i]);
		else if(sayilar[i]==9) printf("\ndokuz",sayilar[i]);
}
	
	return 0;
}
