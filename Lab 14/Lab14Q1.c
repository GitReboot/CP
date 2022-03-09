#include<stdio.h>
#include<stdlib.h>
struct department
{
    char deptname[100];
    int deptid;
    int noofemployees;
    float depttotalexpenses;
};
int display(struct department d[], int s)
{
    int i;
    printf("\nDept Name\tDept ID\tNo.of Employees\tTotal expenses\n");
    for(i=0;i<s;i++)
    {
        printf("%s\t%d\t%d\t%f", d[i].deptname, d[i].deptid, d[i].noofemployees, d[i].depttotalexpenses);
    }
    return 0;
}
int main()
{
int s, i, x, y, z;
float max, min, high;
struct department *d;
printf("Enter the Number of departments: ");
scanf("%d",&s);
d=(struct department *)calloc(s,sizeof(struct department));
for(i=0;i<s;i++)
{
printf("\nEnter Details of Department (%d): \n",i+1);
printf("Enter the Department Name: ");
scanf("%s",d[i].deptname);
printf("Enter the Department ID: ");
scanf("%d",&d[i].deptid);
printf("Enter the number of employees: ");
scanf("%d",&d[i].noofemployees);
printf("Enter the Total expenses: ");
scanf("%f",&d[i].depttotalexpenses);
}
max=d[0].depttotalexpenses;
min=d[0].depttotalexpenses;
for(i=1;i<s;i++)
{
    if(max<d[i].depttotalexpenses)
    {
        max=d[i].depttotalexpenses;
        x=i;
    }
}
for(i=1;i<s;i++)
{
    if(min>d[i].depttotalexpenses)
    {
        min=d[i].depttotalexpenses;
        y=i;
    }
}
high=((d[0].depttotalexpenses)/(d[0].noofemployees));
for(i=1;i<s;i++)
{
    if(high<((d[i].depttotalexpenses)/(d[i].noofemployees)))
    {
        high=((d[i].depttotalexpenses)/(d[i].noofemployees));
        z=i;
    }
}
printf("\nDepartment with the maximum expenses: %s", d[x].deptname);
printf("\nDepartment with the minimum expenses: %s", d[y].deptname);
printf("\nDepartment with the maximum expense per employee: %s", d[z].deptname);
display(d, s);
return 0;
}