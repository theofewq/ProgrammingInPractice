#include <stdio.h>
#include <string.h>

void stripNewline(char *s)
{
    s[strcspn(s, "\n")] = '\0';
}

int main()
{
    char name[100];
    char email[100];
    char phone[30];
    char town[50];
    char backup[100];
    char description[300];

    printf("========================================\n");
    printf("      SUPPLIER MANAGEMENT MODULE\n");
    printf("========================================\n\n");

    printf("Enter supplier name: ");
    fgets(name, sizeof(name), stdin);
    stripNewline(name);

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    stripNewline(email);

    printf("Enter phone: ");
    fgets(phone, sizeof(phone), stdin);
    stripNewline(phone);

    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    stripNewline(town);

    printf("\n========================================\n");
    printf("          SUPPLIER DETAILS\n");
    printf("========================================\n");
    printf("Name : %s\n", name);
    printf("Email: %s\n", email);
    printf("Phone: %s\n", phone);
    printf("Town : %s\n", town);

    printf("\n--- String Lengths ---\n");
    printf("Supplier name length: %zu\n", strlen(name));
    printf("Email length        : %zu\n", strlen(email));
    printf("Town length         : %zu\n", strlen(town));

    {
        char searchName[100];
        printf("\n--- Supplier Search ---\n");
        printf("Enter supplier name to search: ");
        fgets(searchName, sizeof(searchName), stdin);
        stripNewline(searchName);

        if (strcmp(name, searchName) == 0)
            printf("Supplier found: %s\n", name);
        else
            printf("Supplier not found.\n");
    }

    strcpy(backup, name);
    printf("\n--- Backup (strcpy) ---\n");
    printf("Original: %s\n", name);
    printf("Backup  : %s\n", backup);

    strcpy(description, name);
    strcat(description, " operates in ");
    strcat(description, town);
    strcat(description, ".");

    printf("\n--- Supplier Description (strcat) ---\n");
    printf("%s\n", description);

    printf("\n========================================\n");

    return 0;
}