#include"stdio.h"
#include"string.h"
void main()
{
int a,b,temp;
printf("\nEnter the value of a,b");
scanf("\n%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n After swapping=%d %d",a,b);
}
