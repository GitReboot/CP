#include <stdio.h>
int main()
{
char s[20];
int i,v=0,c=0;
printf("Enter the String: ");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i] == 'u')  
v++;  	
else
c++;
}
printf("Number of Vowels: %d", v);  
printf("\nNumber of Consonants: %d", c);   	
return 0;
}