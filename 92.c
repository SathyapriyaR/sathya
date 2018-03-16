#include"stdio.h"
void main()
{ 
int n,sum=0,i,a[100];
printf("\nEnter the number:");
scanf("%d",&n);
printf("\nEnter the values..:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("%d",sum);
}
