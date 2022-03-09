#include <stdio.h>
int main()
{
float a,r,b,h;
int c;
printf("1. Area of Circle\n 2. Area of Triangle\n 3. Area of Rectangle\n Selection: ");
scanf("%d",&c);
switch(c)
{
case 1:
printf("Enter the radius\n");
scanf("%f",&r);
a=3.14*r*r;
printf("Area of Circle is %.2f\n",a);
break;
case 2:
printf("Enter base and height\n");
scanf("%f%f",&b,&h);
a=(b*h)/2;
printf("Area of Triangle is %.2f\n",a);
break;
case 3:
printf("Enter the length and breadth\n");
scanf("%f%f%f",&b,&h);
a=b*h;
printf("Area of Rectangle is %.2f\n",a);
break;
default:
printf("Invalid Choice\n");
}
return 0;
}