#include"stdio.h"
void main()
{
int str[10],i,max;
printf("\nEnter the 10 numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&str[i]);
}
max=str[0];
for(i=0;i<10;i++)
{
if(str[i]>max)
max=str[i];
}
printf("\nMaximum of 10 numbers=%d",max);
}
