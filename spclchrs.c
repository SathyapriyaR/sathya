#include <stdio.h>
#define MAX_SIZE 100
int main()
{
char s[MAX_SIZE];
int alp=0, d=0, splchr=0, i=0;
printf("Enter any string : ");
gets(s);
while(s[i]!='\0')
{
if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
{
alp++;
}
else if(s[i]>='0' && s[i]<='9')
{
++;
}
else
{
splchr++;
}
i++;
}
printf("Total Alphabets : %d\n", alp);
printf("Total Digits : %d\n", d);
printf("Total Special characters : %d\n", splchr);
return 0;
}

