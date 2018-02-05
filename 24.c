#include<stdio.h>
int main()
{
ina n;
printf("Enter the number:");
scanf("%d",&n);
int numArray[10];
int i, sum = 0;
int *ptr;
printf("\nEnter 10 elements : ");
for (i = 0; i < 10; i++)
scanf("%d", &numArray[i]);
ptr = numArray;
for (i = 0; i < 10; i++) 
{
sum = sum + *ptr;
ptr++;
}
printf("The sum of array elements : %d", sum);
}

