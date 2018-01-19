#include<stdio.h>
void main()
{
int n,reversed integer=0,rem,a;
printf("Enter the number");
scanf("%d"&n);
while(n!=0)
{
rem=n%10;
reversed integer=reversed integer*10+rem;
n/=10;
}
if(a==reversed integer)
{
printf("%d is a palindrome");
}
else
{
printf("%d is not a palindrome");
}
return 0;
}
