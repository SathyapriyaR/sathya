#include "stdio.h"
void main()
{
  char a[50],b[50];
  int i,temp=0;
  printf("\nEnter the first string");
  gets(a);
  printf("\nEnter the second string");
  gets(b);
  for(i=0;a[i]!='\0';i++)
  {
  if(a[i]==b[i])
  temp=1;
  else
  temp=0;
  }
  if(temp==1)
  printf("\nThe sting is:%s",a[i]);
  else
  printf("\n The greater sting is:%s",a[i]);
}  
