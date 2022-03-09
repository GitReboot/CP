#include<stdio.h>
int main()
{
float marks[5], percent, sum=0.0; 
printf("Enter five subjects marks: ");
for(int i=0;i<5;i++)
scanf("%f", &marks[i]);
for(int i=0;i<5;i++)
sum+=marks[i];
percent=sum/5;
printf("Total Marks= %.2f\n", sum);
printf("Percentage= %.2f\n", percent);
if(percent>=90)
printf("Grade A");
else if(percent>=80)
printf("Grade B");
else if(percent>=70)
printf("Grade C");
else if(percent>=60)
printf("Grade D");
else if(percent>=40)
printf("Grade E");
else
printf("Grade F");
return 0;
}