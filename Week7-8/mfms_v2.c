#include <stdio.h>
#include <string.h>

// ============================================
// FUNCTION PROTOTYPES
// ============================================
void  displayWelcome();
void  displayMenu();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int   searchEmployee(int id, int ids[], int size);

// ============================================
// MAIN
// ============================================
int main()
{
    int choice;

    displayWelcome();

    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:   // Calculate VAT
            {
                float amount;
                printf("Enter amount: ");
                scanf("%f", &amount);
                printf("VAT (15%%): %.2f\n", calculateVAT(amount));
                break;
            }

            case 2:   // Calculate Salary
            {
                float basic, housing, transport;
                printf("Enter basic salary: ");
                scanf("%f", &basic);
                printf("Enter housing allowance: ");
                scanf("%f", &housing);
                printf("Enter transport allowance: ");
                scanf("%f", &transport);
                printf("Gross Salary: %.2f\n",
                       calculateSalary(basic, housing, transport));
                break;
            }

            case 3:   // Calculate Budget
            {
                float revenue, expenses, balance;
                printf("Enter revenue: ");
                scanf("%f", &revenue);
                printf("Enter expenses: ");
                scanf("%f", &expenses);

                balance = calculateBudget(revenue, expenses);
                printf("Budget Balance: %.2f\n", balance);

                if (balance > 0)
                    printf("Status: SURPLUS\n");
                else if (balance < 0)
                    printf("Status: DEFICIT\n");
                else
                    printf("Status: BALANCED\n");
                break;
            }

            case 4:   // Search Employee
            {
                int ids[] = {101, 102, 103, 104, 105};
                int id, pos;

                printf("Enter employee ID: ");
                scanf("%d", &id);

                pos = searchEmployee(id, ids, 5);

                if (pos == -1)
                    printf("Employee not found.\n");
                else
                    printf("Employee found at position %d.\n", pos);
                break;
            }

            case 5:   // Exit
                printf("Goodbye.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// ============================================
// FUNCTION DEFINITIONS
// ============================================

void displayWelcome()
{
    printf("========================================\n");
    printf("  MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n");
}

void displayMenu()
{
    printf("\n--- MAIN MENU ---\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}

float calculateVAT(float amount)
{
    return amount * 0.15f;      // 15% VAT
}

float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses)
{
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ids[i] == id)
            return i;
    }
    return -1;
}