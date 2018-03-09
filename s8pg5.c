#include <stdio.h>
#include<string.h>
int main(void) {
char a[10];
int n;
printf("Enter the string:");
scanf("%s",a);
n=strlen(a);
if(n%2==0)
{
a[m/2]='*';
a[(m/2)-1]='*';
}
else
{
a[m/2]='*';
}
printf("%s",a);
return 0;
}
