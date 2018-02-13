#include"stdio.h"
void main()
{
int n,i=0,num=0,sum=0;
printf("enter the number ");
scanf("%d",&n);
while(n>0)
{
num=n%10;
n=n/10;
sum=sum+num;
}
printf("sum=%d ",sum);
}
