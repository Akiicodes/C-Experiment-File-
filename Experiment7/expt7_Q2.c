#include <stdio.h>

// Structure to hold employee details
struct Employee {
    char name[50];
    float basicPay;
    float DA;
    float grossSalary;
};

int main() {
    struct Employee emp[100];  // Array for 100 employees
    int i, n;

    printf("Enter number of employees (up to 100): ");
    scanf("%d", &n);

    // Reading employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);  // Reads single-word names
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);

        // Calculating DA and Gross Salary
        emp[i].DA = 0.52 * emp[i].basicPay;
        emp[i].grossSalary = emp[i].basicPay + emp[i].DA;
    }

    // Display results
    printf("\nEmployee Name\tGross Salary\n");
    printf("---------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-15s\t%.2f\n", emp[i].name, emp[i].grossSalary);
    }

    return 0;
}
