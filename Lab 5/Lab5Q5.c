#include<stdio.h>
int main()
{
int v;
printf("Enter the variable(1 to 5): ");
scanf("%d",&v);
switch(v)
{
case 1:
printf("Hello");
break;
case 2:
printf("Tea?");
break;
case 3:
printf("Coffee?");
break;
case 4:
printf("Milkshake?");
break;
case 5:
printf("Juice?");
break;
default:
printf("Bye");
}
return 0;
}