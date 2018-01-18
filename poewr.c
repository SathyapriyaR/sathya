#include<stdio.h>
#include<conio.h>
void main()
{
int base,power;
int result-1;
printf("Enter the base");
scanf("%d",&base");
printf("Enter the power");
scanf("%d",&power);
while(power!=0)
{
result*=base;
--power;
}
printf("result=%d",result);
}
