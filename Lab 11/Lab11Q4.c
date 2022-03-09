#include <stdio.h>
int pos(int p1, int p2)
{
if(p1>0 && p2>0)
return 1;
else if(p1<0 && p2>0)
return 2;
else if(p1<0 && p2<0)
return 3;
else if(p1>0 && p2<0)
return 4;
else if(p1==0 && p2==0)
return 0;
}
int main()
{
int p1,p2;
printf("Input the values for X and Y coordinate: ");
scanf("%d %d",&p1,&p2);
pos(p1,p2);
if(pos(p1,p2)==1)
printf("The point lies in the First quandrant.");
else if(pos(p1,p2)==2)
printf("The point lies in the Second quandrant.");
else if(pos(p1,p2)==3)
printf("The point lies in the Third quandrant.");
else if(pos(p1,p2)==4)
printf("The point lies in the Fourth quandrant.");
else if(pos(p1,p2)==0)
printf("The point lies at the origin.");
return 0;
}