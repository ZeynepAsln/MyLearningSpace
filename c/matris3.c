#include<stdio.h>
int main()
{
	int matris[3][5];
	int i,j;
    int a=0,b=0,c=0,d=0,e=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("enter a value: ");
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		a+=matris[i][0];
	} 
	for(i=0;i<3;i++){
		b+=matris[i][1];
	} 
	for(i=0;i<3;i++){
		c+=matris[i][2];
	} 
	for(i=0;i<3;i++){
		d+=matris[i][3];
	} 
	for(i=0;i<3;i++){
		e+=matris[i][4];
	} 
	
	
	printf("\n%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
