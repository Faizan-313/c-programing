#include <stdio.h>

int calculateDay(int year) {
    int day = 0;
    
    // Formula to calculate the day of the week
    day = (year + (year - 1)/4 - (year - 1)/100 + (year - 1)/400) % 7;
    
    return day;
}

int main() {
    int year, day;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    day = calculateDay(year);
    
    // 0 - Sunday, 1 - Monday, ..., 6 - Saturday
    switch (day) {
        case 0:
            printf("January 1st, %d is Sunday", year);
            break;
        case 1:
            printf("January 1st, %d is Monday", year);
            break;
        case 2:
            printf("January 1st, %d is Tuesday", year);
            break;
        case 3:
            printf("January 1st, %d is Wednesday", year);
            break;
        case 4:
            printf("January 1st, %d is Thursday", year);
            break;
        case 5:
            printf("January 1st, %d is Friday", year);
            break;
        case 6:
            printf("January 1st, %d is Saturday", year);
            break;
        default:
            printf("Invalid year");
    }
    
    return 0;
}