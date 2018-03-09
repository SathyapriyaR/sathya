#include"stdio.h"
#include"string.h"
void main()
{
char str[10],v='*';
int len,i,mid;
printf("\nEnter the string:");
scanf("%s",&str);
len=strlen(str);
mid=len/2;
for(i=0;i<len;i++)
{ 
if(i!=mid)
{
printf("%c",str[i]);  
}
else
printf("%c",v);
}
}
