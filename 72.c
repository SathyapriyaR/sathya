#include"stdio.h"
#include"string.h"
void main()
{
char ch[10];
int i,c=0;
printf("\nEnter the string:");
scanf("%s",&ch[i]);
for(i=0;ch[i]!='\0';i++)
if(ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'||
ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
{
c++;
break;
}
if(c>0)
{
printf("\nyes");
}
else
{
printf("\nNo");
}
}
