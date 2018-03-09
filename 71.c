#include"stdio.h"
#include"string.h"
void main()
{
char str[30];
int c=0,i,j,len;
printf("\nEnter the string:");
scanf("%s",str);
len=strlen(str);
for(i=0;str[i]!='\0';i++)
{
for(j=len-1;str[j]!='\0';j--) 
{
if(str[i]==str[j])
{
c++;
}
}
}
if(c==len)
{
printf("\nNo");
}
else
{
printf("\nYes");
}
}
