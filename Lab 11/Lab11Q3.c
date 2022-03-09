#include <stdio.h>
int prime(int n)
{
int i, f=0;
for(i=2;i<=n/2;++i) 
{
if((n%i)==0) 
{
f=1;
break;
}
}
if(n==1)
return 2;
else 
{
if(f==0)
return 1;
else
return 0;
}
}
int main() 
{
int n;
printf("Enter a number: ");
scanf("%d", &n);
if(prime(n)==1)
printf("%d is a prime number.", n);
else if(prime(n)==0)
printf("%d is not a prime number.", n);
else if(prime(n)==2)
printf("1 is neither prime nor composite.");
return 0;
}