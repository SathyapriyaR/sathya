#include <stdio.h>
void main()
{
char str[100];
int i = 0,j= 0,w= 1;
printf("Enter the string");
scanf("%d"str);
for(i = 0; str[i]!='\0'; i++)
{
j= j+ 1;
}
printf("The number of characters in the string are %d", j);
for(i = 0; i <= j-1; i++)
{
if(str[i] == ' ')
{
w=w+1;
}
}
printf("The number of words in the string are %d", w);
getch();
}
