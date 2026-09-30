#include <stdio.h>

int main()
{
    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentsComplete;

    printf("========================================\n");
    printf("       TENDER EVALUATION SYSTEM\n");
    printf("========================================\n\n");

    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    printf("Enter tender price: ");
    scanf("%f", &price);

    printf("Enter available budget: ");
    scanf("%f", &budget);

    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    printf("\n========================================\n");
    printf("        EVALUATION RESULT\n");
    printf("========================================\n");
    printf("Supplier: %s\n", supplierName);
    printf("Price   : %.2f\n", price);
    printf("Budget  : %.2f\n", budget);

    // --- Decision making ---
    if (registered == 0 || documentsComplete == 0)
    {
        printf("Status  : Disqualified (missing registration or documents)\n");
    }
    else if (price > budget)
    {
        printf("Status  : Disqualified (over budget)\n");
    }
    else
    {
        printf("Status  : Qualified\n");
    }

    printf("========================================\n");

    return 0;
}