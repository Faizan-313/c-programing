#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end, i;
    
    // Getting range from user
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    
    // Printing prime numbers in the given range
    printf("Prime numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}