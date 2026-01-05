
#include<stdio.h>
void toplam(int x,int y){
	int i;
	int toplam=0;
	for(i=x+1;i<y;i++){
		toplam+=i;
	}
	printf("%d ",toplam);
}

int main(){
	int a;
	int b;
	
	printf("enter a value: ");
	scanf("%d",&a);
	
	printf("enter b value: ");
	scanf("%d",&b);
	
	toplam(a,b);
}
