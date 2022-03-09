#include<stdio.h>
#include <stdlib.h>
struct employee
{
int eno;
char ename[10];
float sal;
};
int main()
{
struct employee *e;
int s,i;
printf("Enter the Size: ");
scanf("%d",&s);
e=(struct employee *)calloc(s,sizeof(struct employee));
for(i=0;i<s;i++)
{
printf("Enter Details of Employee (%d): \n",i+1);
printf("Enter the Employee Number: ");
scanf("%d",&e[i].eno);
printf("Enter the Employee Name: ");
scanf("%s",e[i].ename);
printf("Enter the Employee Salary: ");
scanf("%f",&e[i].sal);
}
printf("Details of employee: \n");
printf("Number\tName\tSalary\n");
for(i=0;i<s;i++)
{
printf("%d\t%s\t%f\n",e[i].eno,e[i].ename,e[i].sal);
}
return 0;
}