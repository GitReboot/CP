#include<stdio.h>
int main()
{
int ch, n1, n2, n3, n;
char c;
printf("1. Find the largest of 3 integers\n2. Find whether a number is positive negative or zero\n3. Find whether a character is vowel or consonant/n Enter your choice(1 to 3): ");
scanf("%d", &ch);
switch(ch)
{
case 1:
printf("Enter 3 integers");
scanf("%d%d%d", &n1, &n2, &n3);
if(n1>n2)
{
if(n1>n3)
{
printf("Largest Number= %d", n1);
}
else
{
printf("Largest Number= %d", n3);
}
}
else if(n2>n1)
{
if(n2>n3)
{
printf("Largest Number= %d", n2);
}
else
{
printf("Largest Number= %d", n3);
}
}
else 
{
printf("Largest Number= %d", n3);
}
break;
case 2:
printf("Enter a number: ");
scanf("%d", &n);
if(n<0)
printf("It is a negative number");
else if(n>0)
printf("It is a positive number");
else
printf("The number is equal to 0");
break;
case 3:
printf("Enter a character: ");
scanf("%c",&c);
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
break;
}
return 0;
}