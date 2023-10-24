#include <stdio.h>

int main() {
    int num, sum = 0;
    
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    
    // Calculate the sum of digits
    sum += num % 10;
    num /= 10;            
    
    sum += num % 10;      
    num /= 10;            
    
    sum += num % 10;      
    num /= 10;            
    
    sum += num % 10;      
    num /= 10;            
    sum += num % 10; 
    
    printf("Sum of digits: %d",sum);
    
    return 0;
}