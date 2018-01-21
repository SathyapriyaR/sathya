#include<stdio.h>
#include<ctype.h>
void main()
{
char a[30];
printf("Enter the numbers");
scanf("%c",&c);
if(isdigit(c)==0)
{
printf("%c is not numeric");
}
else
{
printf("%c is numeric");
}
