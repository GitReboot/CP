#include <stdio.h>
int main()
{
int n,t,r=0,sod=0;
printf("Enter a Number: ");
scanf("%d",&n);
t=n;
while(t>0)
{
sod+=t%10;  
t=t/10;     
}
t=sod;
while(t>0)
{
r=r*10+t%10; 
t=t/10;
}
if(r*sod==n)
printf("%d is a Magic Number", n);
else
printf("%d is not a Magic Number", n);
return 0;
}