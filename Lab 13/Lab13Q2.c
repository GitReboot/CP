#include <stdio.h>
struct student 
{
char name[50];
int roll;
float marks;
}s;
int main() 
{
printf("Enter the details: \n");
printf("Enter Student's name: ");
scanf("%s", s.name);
printf("Enter Student's number: ");
scanf("%d", &s.roll);
printf("Enter Student's marks: ");
scanf("%f", &s.marks);
printf("\nDetails of Student:\n");
printf("Name: %s\n", s.name);
printf("Roll number: %d\n", s.roll);
printf("Marks: %.1f\n", s.marks);
return 0;
}