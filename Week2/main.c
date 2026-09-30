#include <stdio.h>

int main()
{
    // Budget calculator variables
    double revenue;
    double expenses;
    double balance;

    // Extension variables
    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("========================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n\n");

    // --- Budget Section ---
    printf("--- BUDGET ---\n");
    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    balance = revenue - expenses;

    // --- Departments & Payroll ---
    printf("\n--- DEPARTMENTS ---\n");
    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter total payroll: ");
    scanf("%lf", &payroll);

    // --- Procurement ---
    printf("\n--- PROCUREMENT ---\n");
    printf("Enter total procurement value: ");
    scanf("%lf", &procurement);

    // --- Assets ---
    printf("\n--- ASSETS ---\n");
    printf("Enter total asset value: ");
    scanf("%lf", &assets);

    // --- Summary ---
    printf("\n========================================\n");
    printf("       MUNICIPAL FINANCIAL SUMMARY\n");
    printf("========================================\n");
    printf("Revenue      : %.2f\n", revenue);
    printf("Expenses     : %.2f\n", expenses);
    printf("Balance      : %.2f\n", balance);
    printf("----------------------------------------\n");
    printf("Departments  : %d\n", departments);
    printf("Payroll      : %.2f\n", payroll);
    printf("Procurement  : %.2f\n", procurement);
    printf("Assets       : %.2f\n", assets);
    printf("========================================\n");

    return 0;
}
