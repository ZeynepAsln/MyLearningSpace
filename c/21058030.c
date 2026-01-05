#include <stdio.h>
#include <math.h>

void print_polynomial(int a4, int a3, int a2, int a1, int a0) {
            printf("\nPolynomial: %d^4 + %dx^3 + %dx^2 + %dx + %d\n", a4, a3, a2, a1, a0);
            }
            
void calculate_fibonacci_sequence(int terms) {
    
	        int i, first = 1, second = 1, next;

            printf("\nFibonacci series: ");

            for (i = 1; i <= terms; ++i) {
            printf("\n%d ", first);
            next = first + second;
            first = second;
            second = next;
            }
        }

void decide_perfect_harmonic_number(int num) {
    int i, sum = 0;
    double h_sum = 0.0;
    double bolensayisi=0;
    int k = 0;
    
    for (i = 1; i < num; i++) {  
	    if (num % i == 0){
        	sum += i;
        }
    }
    
    if (sum == num) {
        printf("\n%d is a perfect number.\n", num);
    }
    else{
        printf("\n%d is not a perfect number.\n", num);
    }
    
    printf("Natural number divisors: ");
     
    for (i = 1; i <= num; i++) { 
	    if (num % i == 0){
	    	printf("%d ",i);
            h_sum += 1.0 / i;
            bolensayisi++;
        }
    }
    
    k = bolensayisi/h_sum;
    
    if (k == 2) {
        printf("\n%d is a harmonic divisor number.\n", num);
    }
    else {
        printf("\n%d is not a harmonic divisor number.\n", num);
    }
}

void bmi_calculation(double height, double weight) {
  
  double bmi = weight / pow(height, 2);
 
  printf("Your BMI is: %.2f\n", bmi);
  
   if (bmi < 16.0) {
    printf("You are in severaly underweight category.");
  }
   else if (bmi >= 16.0 && bmi < 18.4) {
    printf("You are in underweight category.");
  } 
   else if (bmi >= 18.5 && bmi < 24.9) {
    printf("You are in normal category.");
  } 
   else if (bmi >=25.0 && bmi < 29.9) {
    printf("You are in owerweight category.");
  } 
   else if (bmi >= 30.0) {
    printf("You are in obese category.");
  }
}

int main()
{
	int homework;
	
	printf("Please enter the number of the assignment you want to see (1-4): ");
	scanf("%d",&homework);
	
	if(homework==1 || homework==2 || homework==3 || homework==4){
	
	switch(homework){
		case 1: 
            int a4, a3, a2, a1, a0;
            
            printf("\n\nPlease enter the necessary coefficients to print a polynomial");
            
            printf("\n\nPlease enter the coefficients of the x^4: ");
            scanf("%d",&a4);
  
            printf("Please enter the coefficients of the x^3: ");
            scanf("%d",&a3);
 
            printf("Please enter the coefficients of the x^2: ");
            scanf("%d",&a2);
  
            printf("Please enter the coefficients of the x^1: ");
            scanf("%d",&a1);
  
            printf("Please enter the coefficients of the x^0: ");
            scanf("%d",&a0);
 
            print_polynomial(a4, a3, a2, a1, a0);

            break;
            
        case 2:
	        int terms;
            
            printf("\n\nPlease enter the number of terms of the fibonacci sequence you will print");
            
	        printf("\n\nPlease enter the number of terms: ");
            scanf("%d", &terms);
    
            if(terms < 0){
    	    printf("Please enter 'positive' terms number: ");
    	    scanf("%d", &terms);
	        }
    
	        calculate_fibonacci_sequence(terms);
    
            break;
	
	    case 3:
	    	int num,ch;
            
            printf("\n\nPlease enter the number you want to check for perfect number and harmonic divisor number");
            
            do{
            printf("\n\nPlease enter a number: ");
            scanf("%d", &num);
    
            ch = getchar();
            
            if(ch=='*'){
            	break;
			}
            decide_perfect_harmonic_number(num);
            } while(1);
	       
		    break;
			
		case 4:
		    double height, weight;
            int bmi;

            printf("\n\nPlease enter the required values for the height and weight index");
            
            printf("\n\nPlease enter your height (in meters): ");
            scanf("%lf", &height);
  
            printf("Please enter your weight (in kilograms): ");
            scanf("%lf", &weight);

            bmi_calculation(height, weight);
  
            break;
		   
		}
	}
	
	else{
		printf("\nThis number is not volid!");
	}
	
	return 0;
}

