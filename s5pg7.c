#include<stdio.h>
int main()
{
int n,low,high,a[10],i;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
low=a[0];
for(i=1;i<n;i++)
{
if(a[i]<low)
{
low=a[i];
}
}
high=a[0];
for(i=1;i>n;i++)
{
if(a[i]>high);
{
high=a[i];
}
}
printf("%d is low",low);
printf("%d is high",high);
return 0;
}

