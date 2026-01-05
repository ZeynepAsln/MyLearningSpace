#include <stdio.h>
#include <math.h>

void check_number(int num) {
    int i, sum = 0;
    double h_sum = 0.0;
    double bolensayisi=0;
    int k = 0;
     
    for (i = 1; i < num; i++) {  
	    if (num % i == 0){
        	printf("%d ",i);
            sum += i;
        }
    }
    
    if (sum == num) {
        printf("\n%d is a perfect number.\n", num);
    }
    else{
        printf("\n%d is not a perfect number.\n", num);
    }
    
    for (i = 1; i <= num; i++) { 
	    if (num % i == 0){
            h_sum += 1.0 / i;
            bolensayisi++;
        }
    }
    
    k = bolensayisi/h_sum;
    
    if (k == 2) {
        printf("%d is a harmonic divisor number.\n", num);
    }
    else {
        printf("%d is not a harmonic divisor number.\n", num);
    }
}

int main()
{
    int num;
    int ch;
    do{
	
    printf("Please enter a number: ");
    scanf("%d", &num);
    
    ch = getchar();
    if(ch=='*'){
    	break;
	}
    check_number(num);
}
while(1);
    return 0;
}

