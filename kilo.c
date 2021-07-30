#include<stdio.h>
int main()
{
int km,m,cm,mm;
printf("Enter the value are in km :");
scanf("%d",&km);
m=km*1000;
cm=m*100;
mm=cm*10;
printf("\n The value are:\n%dm \n%dcm \n%dmm",m,cm,mm);
return 0;
}

