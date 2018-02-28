#include<stdio.h>
int main()
{
char str[20];
int k,i;
printf("Enter the string and k value:\n");
scanf("%s %d",str,&k);
for(i=0;i<k;i++)
{
printf("%c\n",str[i]);
}
return 0;
}
