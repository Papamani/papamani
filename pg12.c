#include<stdio.h>
int main()
{
int n,reverseint=0,rem,originalint;
printf("Enter the integer:");
scanf("%d",&n);
originalint=n;
while(n!=0)
{
rem=n%10;
reverseint=reverseint*10;
n/=10;
}
if(originalint==reverseint)
printf("%d is a palindrome",originalint);
else
printf("%d is not a palindrome",originalint);
return 0;
}
