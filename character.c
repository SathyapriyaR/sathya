#include<stdio.h>
int main(void)
{
	int a=0,b=0,c=0,d=0;
	while((a=getchar())!=EOF)
	{
  		++b;
  		if(a=='\n')
  		++c;
  		if(a==' '||a=='\t'||a=='\n')
  		++d;
	}
	printf("Characters=%d\n lines=%d\n words=%d\n",b,c,d);
	return 0;
}
