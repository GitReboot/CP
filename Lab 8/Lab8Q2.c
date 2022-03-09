#include<stdio.h>
int main()
{
int n, f0=0, f1=1, f2=0;
printf("Enter N: ");
scanf("%d",&n);
printf("%d ", f0);
while(f2<n)
{
printf("%d ", f1);
f2=f0+f1;
f0=f1;
f1=f2;
}
return 0;
}