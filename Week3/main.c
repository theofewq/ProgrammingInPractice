#include <stdio.h>

int main()
{
    // Declare variables (float is fine for this exercise)
    float basicSalary;
    float housing;
    float transport;
    float tax;
    float grossSalary;
    float netSalary;

    // --- Input ---
    printf("========================================\n");
    printf("      EMPLOYEE SALARY CALCULATOR\n");
    printf("========================================\n\n");

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    printf("Enter tax: ");
    scanf("%f", &tax);

    // --- Calculations ---
    grossSalary = basicSalary + housing + transport;
    netSalary = grossSalary - tax;

    // --- Output ---
    printf("\n========================================\n");
    printf("         SALARY SUMMARY\n");
    printf("========================================\n");
    printf("Basic Salary      : %.2f\n", basicSalary);
    printf("Housing Allowance : %.2f\n", housing);
    printf("Transport Allow.  : %.2f\n", transport);
    printf("----------------------------------------\n");
    printf("Gross Salary      : %.2f\n", grossSalary);
    printf("Tax               : %.2f\n", tax);
    printf("Net Salary        : %.2f\n", netSalary);
    printf("========================================\n");

    // --- Extension: Income classification ---
    if (netSalary >= 20000)
    {
        printf("Income Level      : High Income\n");
    }
    else
    {
        printf("Income Level      : Standard Income\n");
    }

    return 0;
}