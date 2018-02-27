#include"stdio.h"
#include"string.h"
void main()
{
char ch[50];
int i,count;
printf("\nEnter the word:");
scanf("%[^\n]ch",&ch);
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]==' ')
count++;
}
printf("\nNumber of words:%d",count+1);
}
