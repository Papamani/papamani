#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int m,i,t=0;
gets(a);
m=strlen(a);
for(i=0;i<m;i++)
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
{
printf("yes");
t=1;
break;
}
}
if(t==0)
{
printf("no");
}
return 0;
