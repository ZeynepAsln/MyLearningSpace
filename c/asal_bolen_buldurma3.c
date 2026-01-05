#include<stdio.h>
void asalbolen(int sayi){
	int k,i;
	int sayac=0;

    for(i=2;i<sayi;i++){
		if(sayi%i==0){
			for(k=2;k<i;k++){
		        if(i%k==0){
			    sayac++;
		        }
	        }
	        if(sayac==0){
	        printf("%d ",i);
	        }
		}
	}
}

int main(){
	int x;
	int sayi;
	
	printf("enter a value: ");
	scanf("%d",&x);
	
    asalbolen(x);
    
	return 0;
}
