#include"stdio.h"
void main()
{
int n,dig,rem,p=0;
printf("\n Enter the number");
scanf("%d",&n);
dig=n;
while(dig!=0)
{
rem=dig%10;
p=(p*10)+rem;
dig=dig/10;
}
while(p!=0)
{
rem=p%10;
printf(" \t%d",rem);
p=p/10;
}
}
