#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str1[100], str2[100], temp[100];

    while (1) {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {

            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;

                printf("Length of string = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;

                strcpy(temp, str1);
                printf("Copied string = %s\n", temp);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;

                strcat(str1, str2);
                printf("Concatenated string = %s\n", str1);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = 0;

                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are not equal\n");
                break;

            case 5:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = 0;

                strcpy(temp, str1);
                strrev(temp); 
                printf("Reversed string = %s\n", temp);
                break;

            case 6:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
