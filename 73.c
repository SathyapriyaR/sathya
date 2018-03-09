#include"stdio.h"
void main()
{
int startnum,endnum,i,c=0,n;
printf("\nEnter the number:");
scanf("\n%d",&n);
printf("\nEnter the first number:");
scanf("%d",&startnum);
printf("\nEnter the second number:");
scanf("%d",&endnum);
for(i=startnum;i<=endnum;i++)
{
if(n==i)
{
c++;
}
}
if(c==1)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
}
