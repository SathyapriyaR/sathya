#include "stdio.h"
void main()
{
  char a[50],b[50],c[50];
  int i,j;
  printf("\nEnter the first string");
  gets(a);
  printf("\nEnter the second string");
  gets(b);
  for(i=0;a[i]!="";++i)
  {
    c[i]=a[i];
  }
  for(j=0;b[j]!="";++j)
  {
    c[i+j]=b[j];
  }
  c[i+j]="";
  printf("\n The concatenated sting is:%s",c);
}  
