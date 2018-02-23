#include<studio.h>
int main()
{
int a,b,c,n;
printf("Enter the number:");
scanf("%d",&n);
a=n/100;
b=n%100;
c=b/10;
printf("The digits are:\n %d %d %d",a,b,c);
return 0;
}
