#include<stdio.h>
int main()
{
int x=10;
int y=20;
printf(" Before swapping x=%d,y=%d ",x,y);
 x = x ^ y;
 y = x ^ y;
 x = x^ y;
 printf(" After swapping x=%d,y=%d\n",x,y);
 return 0;
 }
