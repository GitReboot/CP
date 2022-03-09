#include <stdio.h>
void swap(int *a, int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}
int main()
{
int n1, n2;
printf("Enter the 2 numbers: ");
scanf("%d%d",&n1,&n2);
printf("Before Swapping:\nn1=%d\tn2=%d\n", n1, n2);
swap(&n1, &n2);
printf("After Swapping:\nn1=%d\tn2=%d\n", n1, n2);
return 0;
}