#include<stdio.h>
int main()
{
int i, j, f[3][3], s[3][3], sum[3][3], diff[3][3];
printf("\nEnter the elements of the first matrix: \n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d", &f[i][j]);
printf("\nEnter the elements of the second matrix: \n");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d", &s[i][j]);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
sum[i][j]=f[i][j]+s[i][j];
printf("\nThe sum of the two entered matrices is: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t", sum[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
diff[i][j]=f[i][j]-s[i][j];
printf("\nThe difference of the two entered matrices is: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t", diff[i][j]);
}
printf("\n");
}
return 0;
}