int main()
{
long long n;
int count=0;
printf("Enter the integer");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("number of digits:%d",count);
}
