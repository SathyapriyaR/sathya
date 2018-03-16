#include"stdio.h"
void main()
{
char s[1000];
int i;
printf("\nEnter the alphanumeric string:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0' && s[i]<='9')
{
printf("%c",s[i]);
}
}
}
