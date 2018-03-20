#include"stdio.h"
void main()
{
  int k,i,sum=0;
  printf("\nEnter the value:");
  scanf("%d",&k);
  for(i=0;i<=k;i++)
  {
    sum=sum+i;
  }
    printf("%d",sum);
}
