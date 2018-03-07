#include<stdio.h>
int main()
{
int rev=0,flag;
char s;
printf("enter the string:");
scanf("%s",&s);
flag=s;
while(flag!='\0')
{
rev=rev*10;
rev=rev+t%10;
flag=flag/10;
}
if(s==rev)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
return 0;
}
