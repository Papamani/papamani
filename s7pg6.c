#include<stdio.h>
int main()
{
int i,t=0,n;
printf("Enter the number:");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%2==0)
{
t=1;
break;
}
}
if(t==0)
{
printf(" %d is a prime number",n);
}
else
{
printf("%d is not a prime number"):
}
return 0;
}
