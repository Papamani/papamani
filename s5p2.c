#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
int i;
printf("Enter the two strings:");
scanf("%s%s",&str1,str2);
i=0;
while (str1[i] == str2[i] && str1[i] != '\0')
i++;
if (str1[i] > str2[i])
printf("%s > %s",str1,str2);
else if (str1[i] < str2[i])
printf("%s < %s",str1,str2);
else
printf("%s= %s",str1,str2);
return 0;
}

