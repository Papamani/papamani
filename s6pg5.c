#include<stdio.h>
#include<string.h>
void main()
{
int n;
char str[100];
printf("Enter alphabets and number");
scanf("%s%d",&str,&n);
if((str>='a' && str<='z')||(n>='0'&& n<=0))
{
printf("YES")
}
else
{
printf("NO");
}
getch();
}
