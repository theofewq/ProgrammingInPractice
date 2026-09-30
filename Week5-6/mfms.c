#include <stdio.h>
#include <string.h>

int main()
{
    // ================================================
    // SECTION A — EMPLOYEE SALARIES
    // ================================================
    float salaries[50];
    int salaryCount = 10;    // change to 50 for final submission
    float totalSalary = 0;
    float averageSalary;
    float highestSalary;
    float lowestSalary;
    float searchSalary;
    int foundSalary = 0;

    printf("========================================\n");
    printf("   MUNICIPAL INFORMATION MANAGEMENT\n");
    printf("========================================\n\n");

    // --- A1: Capture salaries ---
    printf("--- EMPLOYEE SALARIES ---\n");
    for (int i = 0; i < salaryCount; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    // --- A2: Display salaries ---
    printf("\nSalaries entered:\n");
    for (int i = 0; i < salaryCount; i++)
    {
        printf("  Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    // --- A3: Total, average, highest, lowest ---
    highestSalary = salaries[0];
    lowestSalary  = salaries[0];

    for (int i = 0; i < salaryCount; i++)
    {
        totalSalary += salaries[i];

        if (salaries[i] > highestSalary) highestSalary = salaries[i];
        if (salaries[i] < lowestSalary)  lowestSalary  = salaries[i];
    }
    averageSalary = totalSalary / salaryCount;

    printf("\n--- Salary Statistics ---\n");
    printf("Total   : %.2f\n", totalSalary);
    printf("Average : %.2f\n", averageSalary);
    printf("Highest : %.2f\n", highestSalary);
    printf("Lowest  : %.2f\n", lowestSalary);

    // --- A4: Search for a salary ---
    printf("\nEnter salary to search: ");
    scanf("%f", &searchSalary);

    for (int i = 0; i < salaryCount; i++)
    {
        if (salaries[i] == searchSalary)
        {
            foundSalary = 1;
            printf("Found at position %d (Employee %d)\n", i, i + 1);
            break;
        }
    }
    if (!foundSalary)
    {
        printf("Salary %.2f not found.\n", searchSalary);
    }

    // ================================================
    // SECTION B — DEPARTMENT BUDGETS
    // ================================================
    float budgets[10];
    int budgetCount = 10;
    float totalBudget = 0;
    float averageBudget;
    float temp;

    printf("\n========================================\n");
    printf("--- DEPARTMENT BUDGETS ---\n");
    for (int i = 0; i < budgetCount; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    // --- B1: Display ---
    printf("\nBudgets entered:\n");
    for (int i = 0; i < budgetCount; i++)
    {
        printf("  Department %d: %.2f\n", i + 1, budgets[i]);
    }

    // --- B2: Total and average ---
    for (int i = 0; i < budgetCount; i++)
    {
        totalBudget += budgets[i];
    }
    averageBudget = totalBudget / budgetCount;

    printf("\nTotal budget   : %.2f\n", totalBudget);
    printf("Average budget : %.2f\n", averageBudget);

    // --- B3: Bubble sort (ascending) ---
    for (int i = 0; i < budgetCount - 1; i++)
    {
        for (int j = 0; j < budgetCount - i - 1; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                temp            = budgets[j];
                budgets[j]      = budgets[j + 1];
                budgets[j + 1]  = temp;
            }
        }
    }

    printf("\nBudgets sorted (lowest to highest):\n");
    for (int i = 0; i < budgetCount; i++)
    {
        printf("  %.2f\n", budgets[i]);
    }

    // ================================================
    // SECTION C — VEHICLE REGISTRATIONS
    // ================================================
    char registrations[20][20];
    int regCount = 5;    // change to 20 for final submission
    char searchReg[20];
    int foundReg = 0;

    printf("\n========================================\n");
    printf("--- VEHICLE REGISTRATIONS ---\n");
    for (int i = 0; i < regCount; i++)
    {
        printf("Enter registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    // --- C1: Display ---
    printf("\nRegistrations entered:\n");
    for (int i = 0; i < regCount; i++)
    {
        printf("  %s\n", registrations[i]);
    }

    // --- C2: Search ---
    printf("\nEnter registration to search: ");
    scanf("%19s", searchReg);

    for (int i = 0; i < regCount; i++)
    {
        if (strcmp(registrations[i], searchReg) == 0)
        {
            foundReg = 1;
            printf("Found at position %d\n", i + 1);
            break;
        }
    }
    if (!foundReg)
    {
        printf("Registration %s not found.\n", searchReg);
    }

    printf("\n========================================\n");
    printf("           END OF REPORT\n");
    printf("========================================\n");

    return 0;
}