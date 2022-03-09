#include<stdio.h>
int main()
{
float x, y;
printf("Enter the x coordinate: ");
scanf("%f",&x);
printf("Enter the y coordinate: ");
scanf("%f",&y);
if(x>0&&y>0)
{
printf("The point lies in Quadrant 1");
}
else if(x<0&&y>0)
{
printf("The point lies in Quadrant 2");
}
else if(x<0&&y<0)
{
printf("The point lies in Quadrant 3");
}
else
{
printf("The point lies in Quadrant 4");
}
return 0;
}