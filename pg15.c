#include<stdio.h>
int main()
{
int a,b,rem,i;
printf("Enter the first value:");
scanf("%d",&a);
printf("Enter the second value:");
scanf("%d",&b);
printf("Even numbers between %d and %d",a,b);
for(i=a;i<=b;++i)
{
rem=i%2;
if(rem==0)
printf("\n %d",rem);
}
return 0;
}
