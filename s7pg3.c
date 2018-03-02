#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100];
int count=1,i;
printf("Enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==" ")
{
cont=cont+1;
}
}
printf("%d",count);
return 0;
}
