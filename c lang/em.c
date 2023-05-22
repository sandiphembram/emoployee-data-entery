#include <stdio.h>


struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee employees[10];

    
    printf("Enter details of 10 employees:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", employees[i].name);
        printf("Department: ");
        scanf(" %[^\n]s", employees[i].department);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    
    printf("\nEmployee details:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
