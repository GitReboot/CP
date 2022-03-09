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
int i,s=1;
e=(struct student *)calloc(s,sizeof(struct student));
for(i=0;i<s;i++)
{
printf("Enter the Student's Name: ");
scanf("%s",e->name);
printf("Enter the student's Number: ");
scanf("%d",&e->roll);
printf("Enter the Student's Percentage: ");
scanf("%f",&e->per);
}
printf("\nDetails of student: \n");
printf("Roll No\tName\tPercentage\n");
for(i=0;i<s;i++)
{
printf("%d\t%s\t%.2f\n",e->roll,e->name,e->per);
}
return 0;
}