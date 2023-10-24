#include<stdio.h>

void calculatePrimeFactors(int number) {
    int i;
    
    printf("Prime factors of %d are: ", number);
    
    for (i = 2; i <= number; i++) {
        while (number % i == 0) {
            printf("%d ", i);
            number = number / i;
        }
    }
    printf("\n");
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    calculatePrimeFactors(number);
    
    return 0;
}