#include"stdio.h"
void main()
{
int a[50];
int i,n,large,small;
printf("\nEnter the no. of elements");
scanf("\n%d",&n);
printf("\nEnter the elements in array");
for(i=0;i<n;++i)
{
scanf("\n%d",&a[i]);
}
large=small=a[0];
for(i=1;i<n;++i)
{
  if(a[i]>large)
  large=a[i];
  if(a[i]<small)
  small=a[i];
}
printf("\nThe smallest number is=%d",small);
printf("\nThe largest number is=%d",large);
}

