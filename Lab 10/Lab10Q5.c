#include <stdio.h>
int main()
{
int smallest, secondsmallest;
int a[100][100], m,n,i,j;
printf("\n How the values of m and n (m*n array): ");
scanf("%d%d", &m, &n);
printf("\nEnter the elements: ");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d", &a[i][j]);
if(a[0][0]<a[0][1]) 
{
smallest=a[0][0];
secondsmallest=a[0][1];
}
else 
{
smallest=a[0][1];
secondsmallest=a[0][0];
}
for(i=0;i<m;i++)
for(j=2;j<n;j++)
{
if(a[i][j]<smallest) 
{
secondsmallest=smallest;
smallest=a[i][j];
}
else if(a[i][j]<secondsmallest) 
secondsmallest=a[i][j];
}
printf("\nSmallest element: %d", smallest);
printf("\nSecond smallest element: %d", secondsmallest);
return 0;
}