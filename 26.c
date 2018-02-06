#include<stdio.h>
int main()
{
	int n,i,res,tot;
	char a[50];
	printf("\nEnter the value");
	scanf("%d",&n);
	printf("\nEnter the array elements");
	scanf("\n%s",&a[i]);
	for(i=0;i<=n;i++)
	{
		res=a[i]+a[i]+a[i];
    tot=res/3;
		printf("\n%d %d",res,tot);
	}
	return 0;
}
