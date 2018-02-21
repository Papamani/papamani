#include<stdio.h>
#include<string.h>
main()
{
char str1[25],str2[25];
int i=0;j=0;
printf("Enter the string1:\n");
scanf("%s",&str1);
printf("Enter the second string:\n");
scanf("%s",&str2);
while(str1[i]!='\0')
i++;
while(str2[j]!='\0')
{
str1[i]=str2[j];
i++;
j++;
}
str1[i]!='\0';
printf("The concatenate two strings are %s \n",str1);
}
