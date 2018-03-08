#include"stdio.h"
void main() 
{
int n,k,t;
printf("\nEnter the number:");
scanf("%d",&n);
printf("\nThe numbers are:");
scanf("%d",&k);
while(k!=0) 
{
t=k%10;
if((t!=0)&&((t%2)!=0))
{
printf("\t%d",t);
}
k=k/10;
}
}
