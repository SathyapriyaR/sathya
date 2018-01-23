#include <stdio.h>
#define MAX_SIZE 100    
int main()
{
int a[50],n,i,j,temp,c;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter elements in array: ");
for(i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
for(i=0; i<n; i++)
{
for(j=i+1; j<n; j++)
{
if(a[i] > a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
printf("The ascending order is...");
}
c=n/2;
for(i=0;i<n;i++)
{
if(a[i]==a[c])
}
printf("The median element is..");
printf("%d\t", a[i]);
}
return 0;
}
