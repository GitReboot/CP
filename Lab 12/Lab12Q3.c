#include <stdio.h>
int printArray(int *a, int s)
{
int i;
for (i=0;i<s;i++)
{
printf("%d ",*(a+i));
}
return 0;
}
int main()
{
int a1[20],a2[20],s,i,*p1=a1,*p2=a2,*p3;
printf("Enter size of array: ");
scanf("%d", &s);
printf("Enter elements in array: ");
for (i=0;i<s;i++)
{
scanf("%d", (p1 + i));
}
p3 = &a1[s-1];
while(p1<=p3)
{
*p2=*p1;
p1++;
p2++;
}
printf("\nArray1 after copying: ");
printArray(a1, s);
printf("\nArray2 after copying: ");
printArray(a2, s);
return 0;
}