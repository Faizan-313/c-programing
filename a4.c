#include <stdio.h>

int main() {
    float fahrenheit, celsius;
  
    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
  
    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;
  
    // Print the converted temperature
    printf("Temperature in Celsius: %.2f", celsius);
  
    return 0;
}