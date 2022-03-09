#include <stdio.h>
int main()
{
char c;
printf("Enter a character: ");
scanf("%c",&c);
if(c>='a' && c<='z')
{
switch(c)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("%c is a VOWEL.\n",c);
break;
default:
printf("%c is a CONSONANT.\n",c);
}
}
else
{
printf("%c is not an alphabet.\n",ch);
}
return 0;
}