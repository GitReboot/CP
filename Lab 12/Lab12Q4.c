#include <stdio.h>
int sum(int num1, int num2)
{
int r;
r=num1+num2;
return r;
}
int sub(int num1, int num2)
{
int r;
r=num1-num2;
return r;
}
int mult(int num1, int num2)
{
int r;
r=num1*num2;
return r;
}
int div(int num1, int num2)
{
int r;
r=num1/num2;
return r;
}
int main() 
{  
int x, y, choice, result;
int (*ope[4])(int, int);
ope[0] = sum;
ope[1] = sub;
ope[2] = mult;
ope[3] = div;
printf("Enter two integer numbers: ");
scanf("%d%d", &x, &y);
printf("Enter 0 to sum, 1 to subtract, 2 to multiply, or 3 to divide: ");
scanf("%d", &choice);
result = ope[choice](x, y);
printf("%d", result);
return 0;
}