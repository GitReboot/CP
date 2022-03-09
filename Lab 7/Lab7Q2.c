#include <stdio.h>
int main() 
{
int y,mo,d,h,m,s,c;
printf("Enter the number of years: ");
scanf("%d", &y);
printf("1. Months\n 2. Days\n 3. Hours\n 4. Minutes\n 5.Seconds Input your choice(1 to 5):"); 
scanf("%d", &c);
switch(c)
{
case 1:
mo=y*12;
printf("Months= %d", mo);
break;
case 2:
d=y*365;
printf("Days= %d", d);
break;
case 3:
h=y*8760;
printf("Hours= %d", h);
break;
case 4:
m=y*525600;
printf("Minutes= %d", m);
break;
case 5:
s=y*31,536,000;
printf("Seconds= %d", s);
break;
default:
printf("Invalid Choice");
return 0;
}
}