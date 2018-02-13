#include"stdio.h"
void main()
{
int n,i=0,x,d;
char * a[5000];
printf ("\nEnter the numbers:");
scanf("%d",&n);
while(n)
{
d=n%10;
n=n/10;
switch(d)
{
case 0:a[i++]="zero";
       break;
case 1:a[i++]="one";
       break;
case 2:a[i++]="two";
       break;
case 3:a[i++]="three";
       break;
case 4:a[i++]="four";
       break;
case 5:a[i++]="five";
       break;
case 6:a[i++]="six";
       break;
case 7:a[i++]="seven";
       break;
case 8:a[i++]="eight";
       break;
case 9:a[i++]="nine";
       break;
}
for(x=i-1;x>=0;x--)
{
printf ("%s",a[x]);
}
}
}
