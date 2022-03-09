#include <stdio.h>
#include <string.h>
int isPalindrome(char str[])
{
int n, c=0, i;
n=strlen(str);
for(i=0;i<n/2;i++)  
{
if(str[i]==str[n-i-1])
c++;
}
if(c==i)
return 1;
else
return 0;
}
int main()
{
char s[20];  
int r;
printf("Enter the string: ");
scanf("%s",s);
r=isPalindrome(s);
if(r==1)
printf("String is a palindrome.");
else
printf("String is not a palindrome.");
return 0;
}