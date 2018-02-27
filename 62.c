#include"stdio.h"
#include"string.h"
void main()
{
int res,n,c,c1;
printf("\nEnter the number:");
scanf("%d",&n);
while(n>0)
{
res=n%10;
c++;
if(res==1||res==0)
c1++;
n=n/10;
}
if(c==c1)
{
printf("\nYES");
}
else
{
printf("\nNO");
}
}
