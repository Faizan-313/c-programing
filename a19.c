#include <stdio.h>

struct Rectangle {
    int length;
    int width;
};

int main() {
    struct Rectangle rectangle1, rectangle2;
    
    // Input for rectangle 1
    printf("Enter the length and width of rectangle 1: ");
    scanf("%d %d", &rectangle1.length, &rectangle1.width);
    
    // Input for rectangle 2
    printf("Enter the length and width of rectangle 2: ");
    scanf("%d %d", &rectangle2.length, &rectangle2.width);
    
    // Calculate area and perimeter of rectangle 1
    int area1 = rectangle1.length * rectangle1.width;
    int perimeter1 = 2 * (rectangle1.length + rectangle1.width);
    
    // Calculate area and perimeter of rectangle 2
    int area2 = rectangle2.length * rectangle2.width;
    int perimeter2 = 2 * (rectangle2.length + rectangle2.width);
    
    // Compare the area and perimeter
    if (area1 > area2) {
        printf("Area of rectangle 1 is greater than the area of rectangle 2.\n");
    } else if (area1 < area2) {
        printf("Area of rectangle 1 is smaller than the area of rectangle 2.\n");
    } else {
        printf("Area of rectangle 1 is equal to the area of rectangle 2.\n");
    }
    
    if (perimeter1 > perimeter2) {
        printf("Perimeter of rectangle 1 is greater than the perimeter of rectangle 2.\n");
    } else if (perimeter1 < perimeter2) {
        printf("Perimeter of rectangle 1 is smaller than the perimeter of rectangle 2.\n");
    } else {
        printf("Perimeter of rectangle 1 is equal to the perimeter of rectangle 2.\n");
    }
    
    return 0;
}