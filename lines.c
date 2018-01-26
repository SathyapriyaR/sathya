#include<stdio.h>
void main()
{
char line[81], ctr;
int i,c,
end = 0,
lines = 0;
printf("KEY IN THE TEXT.\n");
printf("GIVE ONE SPACE AFTER EACH WORD.\n");
printf("WHEN COMPLETED, PRESS 'RETURN'.\n\n");
while( end == 0)
{
c = 0;
while((ctr=getchar()) != '\n')
line[c++] = ctr;
line[c] = '\0';
}
if(line[0] == '\0')
break ;
else
{
for(i=0; line[i] != '\0';i++)
{
if(line[i] == ' ' || line[i] == '\t')
{
lines = lines +1;
}
printf ("\n");
}
}
printf("Number of lines = %d\n", lines);
}
