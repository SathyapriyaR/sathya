#include<stdio.h>
void main()
{
char ch;
printf("Enter the character");
scanf("%d",&ch);
if(ch>A||ch>a&&ch<Z||ch<z)
{
printf("ch is alphabet");
}
else
{
printf("ch is not an alphabet");
}
}
