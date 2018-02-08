#include"stdio.h"
#include"string.h"
void main()
{
int a,b;
printf("\nEnter the value of a,b);
scanf("\n%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n After swapping=%d %d",a,b);
}
