#include<stdio.h>
void main()
{
int i,fact=1,n;
printf("Enter the number");
scanf("%d",&n);
if (n<=0)
{
fact=1;
}
else
{
for(i=1;i<=n;i++)
  {
  fact=fact*i;
  }
}
printf("factorial of %d is",n,fact);
}
