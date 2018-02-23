#include<stdio.h>
int main()
{
int n,avg,i,sum=0;
printf("Enter the number\n:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("%d",i);
sum=sum+i;
}
printf("%d\n",sum)
avg=sum/n;
printf("The avg number:%d\n",avg);
return 0;
}
