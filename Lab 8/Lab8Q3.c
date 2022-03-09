#include <stdio.h>
int main() 
{
int n, i=1;
printf("\nInput an integer: ");
scanf("%d", &n);
printf("All the divisor of %d are: ", n);
while(i<=n)
{
if((n%i)==0)
printf("\n%d", i);
i++;
}
return 0;
}