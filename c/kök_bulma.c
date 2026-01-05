#include<stdio.h>
#include<math.h>
int main()
/*
ax^2+bx+c �eklindeki denklemin k�kleri x1 ve x2 olsun;
*/
{
	int a,b,c;
	float x1,x2;
	float delta;
	printf("Lutfen a degeri giriniz:");
	scanf("%d",&a);
	printf("Lutfen b degeri giriniz:");
	scanf("%d",&b);
	printf("Lutfen c degeri giriniz:");
	scanf("%d",&c);
	
	delta= b*b-4*a*c;
	x1 = (-b + (sqrt(delta)) / 2*a );
    printf("Denklemin 1.koku %.2f'dir",x1);
	x2 = (-b - (sqrt(delta)) / 2*a );
	printf("Denklemin 2.koku %.2f'dir",x2);
	return 0;
}
