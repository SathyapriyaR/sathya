#include <stdio.h>
int main()
{
int i,n,a=0,b=1,temp;
printf("Enter the number of terms:");
scanf("%d", &n);
printf("Fibonacci Series:");
for (i=1;i<=n;i++)
{
printf("%d,&a);
temp=a+b;
a=b;
b=temp;
}
return 0;
}
