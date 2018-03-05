#include <stdio.h>
int main() 
{
	int i;
	printf("enter the number:");
	scanf("%d",&i);
	i++;
	while(i%2!=0)
	{
		i=i+1;
	}
	printf("\n%d",i);
	return 0;
}
