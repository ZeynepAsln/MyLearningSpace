#include<stdio.h>
int main(){
int dizi[10];
int i;
int even=0;
int odd=0;

for(i=0;i<10;i++){
	printf("enter a value: ");
	scanf("%d",&dizi[i]);
}

for(i=0;i<10;i++){
	if(dizi[i]%2==0){
		even++;
	}
	else{
		odd++;
	}
}

printf("\ncounter of even: %d",even);
printf("\ncounter of odd: %d",odd);

return 0;
}
