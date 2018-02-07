#include<stdio.h>
int main()
{
int mins,hour,minutes;
printf("Enter the minutes");
scanf("%d",&mins);
hour=mins/60;
minutes=mins%60;
printf("Time %d Minutes %d",hour,minutes);
return 0;
}
