#include<stdio.h>
#include <stdlib.h>
struct student
{
int roll;
char name[50];
float per;
};
int main()
{
struct student *e;
int s,i;
printf("Enter the Size: ");
scanf("%d",&s);
e=(struct student *)calloc(s,sizeof(struct student));
for(i=0;i<s;i++)
{
printf("Enter Details of Student (%d): \n",i+1);
printf("Enter the Student's Name: ");
scanf("%s",e[i].name);
printf("Enter the Student's Number: ");
scanf("%d",&e[i].roll);
printf("Enter the Student's Percentage: ");
scanf("%f",&e[i].per);
}
printf("Details of student: \n");
printf("Roll no\tName\tPercentage\n");
for(i=0;i<s;i++)
{
printf("%d\t%s\t%.2f\n",e[i].roll,e[i].name,e[i].per);
}
return 0;
}