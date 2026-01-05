#include<stdio.h>
int F(int x,int y,int z,int t){
	int sum=0;
	int n;

	sum=x+y+z+t;

	printf("%d",sum);
	return 0;
}

int main(){
	
int arry[4];
int i;

for(i=0;i<4;i++){
	printf("enter a value: ");
	scanf("%d",&arry[i]);
}
 F(arry[0],arry[1],arry[2],arry[3]);

return 0;
}
