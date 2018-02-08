#include"stdio.h"
void main()
{
int n,s=0,num,i;
float avg;
printf("\nEnter the no. of elements");
scanf("\n%d",&n);
printf("\nEnter the elements");
for(i=0;i<n;++i)
{
scanf("\n%d",&num);
s=s+num;
}
avg=s/n;
printf("\n Average=%f",n,avg);
}
