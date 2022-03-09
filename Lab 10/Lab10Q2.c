#include<stdio.h>
int main()
{
int a[10],b[10], i, r; 
printf("\nEnter elements of 1st Matrix: \n"); 
for(i=0; i<10; i++) 
scanf("%d",&a[i]);
printf("\nEnter elements of 2nd Matrix: \n"); 
for(i=0; i<10; i++) 
scanf("%d",&b[i]);
for(i=0;i<10;i++)
{
if(a[i]!=b[i])
r=0;
else
r=1;
}
if(r==1)
printf("Arrays have same elements.\n");
else
printf("Arrays have different elements.\n");
return 0;
}