#include<stdio.h>
int main()
{
	int ret = 0;
	char str1[] = "123";
	char str2[] = "ABC";
	ret = isNumericString(str1);
	if(ret)
		printf("It is numeric string");
	else
		printf("It is not numeric string");
	ret = isNumericString(str2);
	if(ret)
		printf("It is numeric string");
	else
		printf("It is not numeric string");	
	return 0;
  }
