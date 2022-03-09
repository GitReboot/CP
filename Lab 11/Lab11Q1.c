#include<stdio.h>
int color(char c)
{
switch(c)
{
case 'R':
case 'r':
printf("Red");
break;
case 'O':
case 'o':
printf("Orange");
break;	
case 'Y':
case 'y':
printf("Yellow");
break;
case 'G':
case 'g':
printf("Green");
break;
case 'B':
case 'b':
printf("Blue");
break;
case 'I':
case 'i':
printf("Indigo");
break;
case 'V':
case 'v':
printf("Violet");
break;
default:
printf("Color not present.");
}
return 0;
}
int main()
{
char c;
printf("Enter the letter: ");
scanf("%c", &c);
color(c);
return 0;
}