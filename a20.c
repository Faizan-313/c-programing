#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    // Input the coefficients of the quadratic equation
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;
    
    // Check the discriminant value
    if (discriminant > 0) {
        // Roots are real and different
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2f and %.2f", root1, root2);
    } else if (discriminant == 0) {
        // Roots are real and equal
        root1 = -b / (2 * a);
        printf("Roots are: %.2f and %.2f", root1, root1);
    } else {
        // Roots are complex and different
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are: %.2f + %.2fi and %.2f - %.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}