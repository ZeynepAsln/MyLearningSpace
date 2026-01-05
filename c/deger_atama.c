#include<stdio.h>
int main()
{


int x,y,z;
printf("Please enter x value:");
scanf("%d",&x);
printf("Please enter y value:");
scanf("%d",&y);
z=x;
x=y;
y=z;
printf("The new value of x is %d\n",x);
printf("The new value of y is %d\n",y);
return 0;
}
