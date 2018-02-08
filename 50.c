#include<stdio.h>
void main()
{
int n,temp,flag=0;
printf("\nEnter the number");
scanf("\n%d",&n);
temp=n;
while(n!=1)
{
if(temp%2!=1)
{
flag==1;
break;
}
temp=temp/2;
}
if(flag==0)
{
printf("\nYES");
}
else
{
printf("\nNO");
}
}
