#include<stdio.h>
int main()
{
int n ,even;
printf("Enter the number:\n");
scanf("%d",&n);
if(n%2==0)
{
even=n-2;
}
else
{
even=n-1;
}
printf("%d\n",even);
return 0;
}
