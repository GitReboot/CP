#include<stdio.h>
int main()
{
int a, b, c;
printf("Enter the first number, a= ");
scanf("%d",&a);
printf("Enter the second number, b= ");
scanf("%d",&b);
c=a;
a=b; 
b=c;
printf("Numbers after swapping, a=%d,b=%d",a,b);
return 0;
}