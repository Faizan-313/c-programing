#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI using the formula: weight (kg) / (height (m) * height (m))
    bmi = weight / (height * height);

    printf("Your BMI is: %.2f", bmi);

    return 0;
}