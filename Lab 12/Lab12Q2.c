#include <stdio.h>
int main()
{
int a[10],*p,i;
p=&a[0];
printf("Enter array elements:\n");
for(i=0;i<10;i++)
{
scanf("%d",p+i);
}
printf("Address\t\tValue\n");
for(i=0;i<10;i++)
{
printf("%d\t%d\n",(p+i),*(p+i));
}
return 0;
}