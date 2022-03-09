#include<stdio.h>
int main()
{
int a[2][3][2];
printf("Enter 12 values: \n");
for (int i=0;i<2;++i)
for (int j=0;j<3;++j)
for (int k=0;k<2;++k)
scanf("%d", &a[i][j][k]);
printf("\nMatrix Elements:\n");
for (int i=0;i<2;++i)
{
for (int j=0;j<3;++j)
{
for (int k=0;k<2;++k)
printf("%d\t", a[i][j][k]);
printf("\n");
}
printf("\n");
}
return 0;
}