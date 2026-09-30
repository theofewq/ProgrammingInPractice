#include <stdio.h>

int main()
{
    float salary;
    float total = 0;
    float highest;
    float lowest;
    float average;
    int count = 50;   // change to 5 for quicker testing

    printf("========================================\n");
    printf("   MUNICIPAL EMPLOYEE SALARY ANALYSIS\n");
    printf("========================================\n\n");

    for (int i = 1; i <= count; i++)
    {
        printf("Enter salary for employee %d: ", i);
        scanf("%f", &salary);

        total = total + salary;

        // Initialise highest and lowest on the first iteration
        if (i == 1)
        {
            highest = salary;
            lowest = salary;
        }

        if (salary > highest) highest = salary;
        if (salary < lowest)  lowest = salary;
    }

    average = total / count;

    printf("\n========================================\n");
    printf("           SALARY REPORT\n");
    printf("========================================\n");
    printf("Employees processed : %d\n", count);
    printf("Total salary        : %.2f\n", total);
    printf("Average salary      : %.2f\n", average);
    printf("Highest salary      : %.2f\n", highest);
    printf("Lowest salary       : %.2f\n", lowest);
    printf("========================================\n");

    return 0;
}