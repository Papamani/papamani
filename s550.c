#include<stdio.h>
int main()
{
int n,i=2;
printf("Enter number:");
scanf("%d",&n);
while(i<=n)
{
i=i*2;
}
if(i==n)
{
printf("Yes");
}
return 0;
}
