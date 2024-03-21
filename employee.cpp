#include <stdio.h>

union EmployeeDetails {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    union EmployeeDetails employee;

    printf("Enter employee name: ");
    scanf("%s", employee.name);

    printf("Enter employee ID: ");
    scanf("%d", &employee.employeeID);

    printf("Enter employee salary: ");
    scanf("%f", &employee.salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", employee.name);
    printf("ID: %d\n", employee.employeeID);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}

