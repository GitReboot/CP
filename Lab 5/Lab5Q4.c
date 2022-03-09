#include<stdio.h>
int main()
{
float m1,m2,m3,m4,m5, p,sum;
printf("Enter the marks of 5 subjects: ");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
p=(sum/500)*100;
if(p>80);
{
printf("Division: Distinction");
}
else if(p<=80&&p>=60);
{
printf("Division: First");
}
else if(p<60&&p<=45);
{
printf("Division: Second");
}
else
{
printf("Division: Fail");
}
return 0;
}