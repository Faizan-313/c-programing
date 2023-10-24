#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2f", area);
    printf("Circumference of the circle: %.2f", circumference);

    return 0;
}