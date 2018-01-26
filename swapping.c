#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
int a,b;
printf("\nEnter two numbers:");
scanf("%d %d", &a,&b);
printf("\nbefore swapping are a1=%d b1=%d",a,b);
swap(&a,&b);        
printf("\nafter swapping are a1=%d b1=%d",a,b);
}
void swap(int *x, int *y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
