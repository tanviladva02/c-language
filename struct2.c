#include <stdio.h>

struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

int main() {
    struct Student student1, student2, student3;

    printf("Enter details for student 1:\n");
    printf("ID: ");
    scanf("%d", &student1.stu_id);
    printf("Name: ");
    scanf("%s", student1.stu_name);
    printf("Age: ");
    scanf("%d", &student1.stu_age);
    printf("Course: ");
    scanf("%s", student1.stu_course);
    printf("City: ");
    scanf("%s", student1.stu_city);
    printf("Standard: ");
    scanf("%d", &student1.stu_standard);
    printf("School: ");
    scanf("%s", student1.stu_school);

    printf("\nEnter details for student 2:\n");
    printf("ID: ");
    scanf("%d", &student2.stu_id);
    printf("Name: ");
    scanf("%s", student2.stu_name);
    printf("Age: ");
    scanf("%d", &student2.stu_age);
    printf("Course: ");
    scanf("%s", student2.stu_course);
    printf("City: ");
    scanf("%s", student2.stu_city);
    printf("Standard: ");
    scanf("%d", &student2.stu_standard);
    printf("School: ");
    scanf("%s", student2.stu_school);

    printf("\nEnter details for student 3:\n");
    printf("ID: ");
    scanf("%d", &student3.stu_id);
    printf("Name: ");
    scanf("%s", student3.stu_name);
    printf("Age: ");
    scanf("%d", &student3.stu_age);
    printf("Course: ");
    scanf("%s", student3.stu_course);
    printf("City: ");
    scanf("%s", student3.stu_city);
    printf("Standard: ");
    scanf("%d", &student3.stu_standard);
    printf("School: ");
    scanf("%s", student3.stu_school);

    printf("\nStudent 1 Details:\n");
    printf("ID: %d\nName: %s\nAge: %d\nCourse: %s\nCity: %s\nStandard: %d\nSchool: %s\n",
        student1.stu_id, student1.stu_name, student1.stu_age, student1.stu_course,
        student1.stu_city, student1.stu_standard, student1.stu_school);

    printf("\nStudent 2 Details:\n");
    printf("ID: %d\nName: %s\nAge: %d\nCourse: %s\nCity: %s\nStandard: %d\nSchool: %s\n",
        student2.stu_id, student2.stu_name, student2.stu_age, student2.stu_course,
        student2.stu_city, student2.stu_standard, student2.stu_school);

    printf("\nStudent 3 Details:\n");
    printf("ID: %d\nName: %s\nAge: %d\nCourse: %s\nCity: %s\nStandard: %d\nSchool: %s\n",
        student3.stu_id, student3.stu_name, student3.stu_age, student3.stu_course,
        student3.stu_city, student3.stu_standard, student3.stu_school);

    return 0;
}

