#include <stdio.h>
#include<string.h>
int main()
{
char first[100], middle[100], last[100], full[300];
printf("Enter the first name: ");
scanf(" %s", first);
printf("Enter the middle name: ");
scanf(" %s", middle);
printf("Enter the last name: ");
scanf(" %s", last);
strcpy(full, first);
strcat(full, " ");
strcat(full, middle);
strcat(full, " ");
strcat(full, last);
printf("Full name: %s", full);
return 0;
}