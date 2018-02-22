#include "stdio.h"
void main()
{
int a,b,n,i,temp;
a=0,b=1;
printf("\nEnter the limits:");
scanf("\n%d",&n);
printf("\nfionacci series are");
printf("\n%d %d",a,b);
for(i=2;i<=n;i++)
{
temp=a+b;
a=b;
b=temp;
printf("\t %d",temp);
}
}
