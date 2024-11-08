#include <stdio.h>
#include <string.h>

struct employee {
    char name[20];
    float salary;
    char email[50];
};

int main() {
    struct employee emp = {
        "John Doe",
        55000.50,
        "john.doe@company.com"
    };

    printf("Name: %s\n", emp.name);
    printf("ID: 12345\n");
    printf("Department: Human Resources\n");
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}