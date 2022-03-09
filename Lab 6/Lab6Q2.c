#include <stdio.h>
int main() 
{
char o;
double f, s;
printf("Enter an operator (+, -, *, /): ");
scanf("%c", &o);
printf("Enter two numbers: ");
scanf("%lf %lf", &f, &s);
switch (o) 
{
case '+':
printf("%.2lf + %.2lf = %.2lf", f, s, f + s);
break;
case '-':
printf("%.2lf - %.2lf = %.2lf", f, s, f - s);
break;
case '*':
printf("%.2lf * %.2lf = %.2lf", f, s, f * s);
break;
case '/':
printf("%.2lf / %.2lf = %.2lf", f, s, f / s);
break;
default:
printf("Operator is not correct");
}
return 0;
}