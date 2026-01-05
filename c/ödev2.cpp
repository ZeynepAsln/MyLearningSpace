#include <stdio.h>

void printFibonacci(int terms) {
    
	int i, first = 1, second = 1, next;

    printf("Fibonacci series: ");

    for (i = 1; i <= terms; ++i)
    {
        printf("\n%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    
	int terms;
    
	printf("Please enter the number of terms: ");
    scanf("%d", &terms);
    
    if(terms < 0){
    	printf("Please enter 'positive' terms number: ");
    	scanf("%d", &terms);
	}
    
	printFibonacci(terms);
    
	return 0;
}


