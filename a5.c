#include <stdio.h>

int main() {
    float basicSalary, da, hra, grossSalary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate Dearness Allowance (DA) and House Rent Allowance (HRA)
    da = 0.1 * basicSalary;
    hra = 0.15 * basicSalary;

    // Calculate gross salary
    grossSalary = basicSalary + da + hra;

    // Print the gross salary
    printf("Gross Salary: %.2f", grossSalary);

    return 0;
}