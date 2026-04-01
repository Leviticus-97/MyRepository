#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];
    float salary;
};

void totalEmployees(int n) {
    printf("Total number of employees = %d\n", n);
}

void countGender(struct Employee e[], int n) {
    int male = 0, female = 0, i;
    for (i = 0; i < n; i++) {
        if (strcmp(e[i].gender, "Male") == 0)
            male++;
        else
            female++;
    }
    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);
}

void salaryAbove10000(struct Employee e[], int n) {
    int i;
    printf("Employees with salary more than 10000:\n");
    for (i = 0; i < n; i++)
        if (e[i].salary > 10000)
            printf("%s\n", e[i].name);
}

void asstManager(struct Employee e[], int n) {
    int i;
    printf("Employees with designation Asst Manager:\n");
    for (i = 0; i < n; i++)
        if (strcmp(e[i].designation, "Asst Manager") == 0)
            printf("%s\n", e[i].name);
}

int main() {
    struct Employee e[50];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Designation: ");
        scanf("%s", e[i].designation);
        printf("Gender: ");
        scanf("%s", e[i].gender);
        printf("Date of Joining: ");
        scanf("%s", e[i].doj);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n");
    totalEmployees(n);
    countGender(e, n);
    salaryAbove10000(e, n);
    asstManager(e, n);

    return 0;
}