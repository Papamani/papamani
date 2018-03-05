#include<stdio.h>
int main()
{
int a,b;
printf("Enter the two numbers:");
scanf("%d%d",&a,&b);
if(a%2==0)
{
printf("the first is even number");
}
else if(b%2==0)
{
printf("the second number is even number");
}
else
{
printf("The above 2 numbers are odd number");
}
return 0;
}
