#include <stdio.h>
int main() 
{
char o;
double f, s;
printf("Enter an operator (+, -, *, /): ");
scanf("%c", &o);
printf("Enter two numbers: ");
scanf("%lf %lf", &f, &s);
if(o=='+')
printf("%.2lf + %.2lf = %.2lf", f, s, f + s);
else if(o=='-')
printf("%.2lf - %.2lf = %.2lf", f, s, f - s);
else if(o=='*')
printf("%.2lf * %.2lf = %.2lf", f, s, f * s);
else
printf("%.2lf / %.2lf = %.2lf", f, s, f / s);
return 0;
}