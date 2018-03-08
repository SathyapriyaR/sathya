#include"stdio.h"
#include"string.h"
void main()
{
int p,q,res;
printf("\nEnter the value of p:");
scanf("\n%d",&p);
printf("\nEnter the value of q:");
scanf("\n%d",&q);
res=q-p;
if(res==0&&res%2==0)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
}
