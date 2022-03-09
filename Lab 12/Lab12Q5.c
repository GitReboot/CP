#include <stdio.h>  
#include<string.h>  
int main()  
{
char s1[20],s2[20];
int r;
printf("Enter the first string: ");  
scanf("%s",s1);
printf("Enter the second string: ");  
scanf("%s",s2);
r=strcmp(s1,s2);  
if(r==0)  
printf("Strings are same");  
else  
printf("Strings are different");  
return 0;  
}