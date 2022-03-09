#include<stdio.h>
struct student 
{
char name[50];
int rollno;
float marks;
};
int main( )
{
int i;
struct student sarr[3];
printf("Enter the Details: \n");
for(i=0; i<3; i++)
{
printf("Enter Details of Student (%d): \n",i+1);
printf("Enter Student's name: ");
scanf("%s",sarr[i].name);
printf("Enter Student's number: ");
scanf("%d",&sarr[i].rollno);
printf("Enter Student's marks: ");
scanf("%f",&sarr[i].marks);
}
printf("\nName\tRollNo\tMarks\n");
for(i=0; i<3; i++)
{
printf("%s\t%d\t%.2f\t\n", sarr[i].name, sarr[i].rollno, sarr[i].marks);
}
return 0;
}