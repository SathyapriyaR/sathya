#include"stdio.h"
void main()
{
int n;
printf("\nEnter the number:");
scanf("%d",&n);
while(n%10!=0)
{
n++;
}
printf("\nnearest greatest number is=%d",n);
}
