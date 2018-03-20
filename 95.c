#include"stdio.h"
void main()
{
  int p,t,r,res;
  printf("\nEnter the principal amount:");
  scanf("%d",&p);
  printf("\nEnter time:");
  scanf("%d",&t);
  printf("\nEnter the rate:");
  scanf("%d",&r);
  res=(p*t*r)/100;
  printf("\nThe simple interest is:%d",res);
}
