#include<stdio.h>
void main()
{
char ch;
printf("Enter any charctetr");
scanf("%c",ch);
if(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')
{
printf("Charcter is a alphabet");
else
{
printf("Charcter is a not a alphabet");
}
getch();
}
