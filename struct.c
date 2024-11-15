#include <stdio.h>

struct Employee {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    float emp_experience;
    char emp_company_name[50];
};

int main() {
    int num_employees,i;

    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    struct Employee employees[num_employees];

    for (i = 0; i < num_employees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].emp_name);
        printf("Age: ");
        scanf("%d", &employees[i].emp_age);
        printf("Role: ");
        scanf("%s", employees[i].emp_role);
        printf("City: ");
        scanf("%s", employees[i].emp_city);
        printf("Experience (in years): ");
        scanf("%f", &employees[i].emp_experience);
        printf("Company Name: ");
        scanf("%s", employees[i].emp_company_name);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < num_employees; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\nName: %s\nAge: %d\nRole: %s\nCity: %s\nExperience: %.1f years\nCompany: %s\n",
            employees[i].emp_id, employees[i].emp_name, employees[i].emp_age,
            employees[i].emp_role, employees[i].emp_city, employees[i].emp_experience,
            employees[i].emp_company_name);
    }

    return 0;
}

