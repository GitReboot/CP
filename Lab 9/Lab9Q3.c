#include <stdio.h>
int main() 
{
int a,i,f=0;
printf("Enter a number: ");
scanf("%d", &a);
for(i=2;i<=a/2;++i) 
{
if((a%i)==0) 
{
f=1;
break;
}
}
if(a==1)
{
printf("1 is neither prime nor composite.");
} 
else 
{
if(f==0)
printf("%d is a prime number.", a);
else
printf("%d is not a prime number.", a);
}
return 0;
}