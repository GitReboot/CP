#include<stdio.h> 
int convert(int n)
{
int b[10], i;
for(i=0;n>0;i++)    
{    
b[i]=n%2;    
n=n/2;    
}    
printf("\nBinary number: ");    
for(i-=1;i>=0;i--)   
{    
printf("%d",b[i]);
}    
return 0;
} 
int main()
{  
int n;    
printf("Enter the decimal number: ");    
scanf("%d",&n);
convert(n);
return 0;  
}