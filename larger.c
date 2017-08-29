#include<stdio.h>
void main()
{
int a,b,c;
int n;
printf("enter the value oa a b c");
scanf("%d%d%d",&a,&b,&c);
if(a<b<c)
{
printf("%d a is larger number");
}
else if(b<c)
{
printf("%d b is larger umber");
}
else
printf("%d c is larger number");
getch();
}
