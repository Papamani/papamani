#include<stdio.h>
int main()
{
int n[10],i;
int max;
printf("Enter the 10 Numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&n[i]);
}
max= n[0];
for(i=0;i<10;i++) 
{
if(n[i]>max) 
{
max=a[i];
}
}
printf("The Maxmum of ten numbers is %d",max);
return 0;
}

    
