#include<stdio.h>
int main()
{
int n, sub=0;
float m, sum=0, percent;
printf("Enter the number of students: ");
scanf("%d", &n);
for(int i=0;i<n;i++)
{
percent=0.0;
printf("For Student %d: ", i+1);
printf("\nEnter number of subjects: ");
scanf("%d", &sub);
for(int j=0;j<sub;j++)
{
printf("Enter marks in Subject %d: ", j+1);
scanf("%f", &m);
sum=sum+m;
}
percent=sum/sub;
printf("Percentage: %.2f %\n", percent);
sum=0;
}
return 0;
}