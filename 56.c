#include"stdio.h"
void main()
{
char s[20];
int c=0,i;
printf("\nEnter the string:");
scanf("%[^\n]s",&s[i]);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
{
c++;
break;
}
}
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0'&&s[i]<='9')
{
c++;
break;
}
}
if(c!=0)
{
printf("\nYES");
}
else
{
printf("NO");
}
}
