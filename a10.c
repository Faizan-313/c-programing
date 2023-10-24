#include <stdio.h>

void convertToRoman(int year) {
    int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;

    if (year <= 0) {
        printf("Invalid year");
        return;
    }

    while (year > 0) {
        if (year >= numbers[i]) {
            printf("%s", romanNumerals[i]);
            year -= numbers[i];
        } else {
            i++;
        }
    }
    printf("\n");
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    convertToRoman(year);
    return 0;
}