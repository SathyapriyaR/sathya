#include<stdio.h>
void main()
{
int lim,a[50],i,n,sum=0;
printf("Enter the number");
scanf("%d"&lim);
for(i=0;i<lim;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&n);
for(i=0;i<n;i++)
{
sum=sum+i;
}
printf("sum is %d");
}
