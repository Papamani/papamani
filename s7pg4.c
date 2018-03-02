#include<stdio.h>
int main()
{
int a,b,c;
printf(Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
c=a+b;
if(c%2==0)
{
printf("\nEven");
}
else
{
printf("\nodd");
}
return 0;
}
