#include"stdio.h"
void main()
{
  int i,c=0,n;
  printf("\nEnter the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    c++;
  }
if(c!=2)
printf("\nYes");
else
printf("\nNo");
}
