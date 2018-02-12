#include<stdio.h>
int main()
{
int a=0,b=1;
int c,n,i;
printf("Enter the value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a=b;
b=c;
c=a+b;
printf(" %d",c);
}
return 0;
}
