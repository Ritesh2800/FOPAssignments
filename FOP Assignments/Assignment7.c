#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[3];
    int total;
    float perc;
};

int main() {
    int n, i, j;
    struct Student s[100];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        printf("Enter marks in 3 subjects:\n");
        for (j = 0; j < 3; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].perc = s[i].total / 3.0;
    }

    printf("\n===== Student Details =====\n");

    for (i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal: %d", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].perc);
    }

    return 0;
}
