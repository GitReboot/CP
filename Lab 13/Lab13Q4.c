#include <stdio.h>
#include <string.h>
struct employee
{
char name[50];
int age;
float salary;
}e;
int main() 
{
int i;
struct employee *ptr;
printf("Enter Employee Details:\n");
printf("Enter Employee's name: ");
scanf("%s", e.name);
printf("Enter Employee's age: ");
scanf("%d", &e.age);
printf("Enter Employee's salary: ");
scanf("%f", &e.salary);
ptr=&e;
printf("\nEmployee's Details:\n");
printf("Employee Name: %s\n", ptr->name);
printf("Employee Age: %d\n", ptr->age);
printf("Employee Salary: %.2f", ptr->salary);
return 0;
}