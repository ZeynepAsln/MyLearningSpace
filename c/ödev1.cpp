#include <stdio.h>

void print_polynomial(int a4, int a3, int a2, int a1, int a0) {
  printf("\nPolynomial: %d^4 + %dx^3 + %dx^2 + %dx + %d\n", a4, a3, a2, a1, a0);
}

int main(void) {
  
  int a4, a3, a2, a1, a0;

  printf("Please enter the coefficients of the x^4: ");
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

  return 0;
}

