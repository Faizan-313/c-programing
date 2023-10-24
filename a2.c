#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Reverse the number
    reversed += num % 10 * 10000;    
    num /= 10;                    

    reversed += num % 10 * 1000;     
    num /= 10;                      

    reversed += num % 10 * 100;      
    num /= 10;                     

    reversed += num % 10 * 10;       
    num /= 10;                      

    reversed += num % 10;   

    printf("Reversed number: %d", reversed);

    return 0;
}