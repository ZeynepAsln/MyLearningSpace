#include <stdio.h>
#include <math.h>

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

int main() {
  double height, weight;
  int bmi;

  printf("Please enter your height (in meters): ");
  scanf("%lf", &height);
  
  printf("Please enter your weight (in kilograms): ");
  scanf("%lf", &weight);

  bmi_calculation(height, weight);
  
  return 0;
}

