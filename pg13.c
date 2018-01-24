#include<stdio.h>
int main()
{
int a,i,flag=0;
printf("Enter the number :");
scanf("%d",&a);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("YES");
else
printf("NO");
return 0;
}

