#include<stdio.h>
int main()
{
char str[100];
int spchar,Digits,Alphabets;
int counter;
printf("Enter any string:/n");
gets(str);
if(str[counter]>='0' && str[counter]<='9')
{
Digits++;
}
else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
{
Alphabet++;
}
else
{
spcharr++;
}
printf("\nDigits: %d \nAlphabets: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpecialChar);
return 0;
}
