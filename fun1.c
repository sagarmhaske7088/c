#include<stdio.h>

int main()
{
int x,flag=0;

printf("\n Enter the vaule");
scanf("%d",&x);

for(int i=2;i<x;i++)
{

if(x%2==0)
{
flag=1;
}
}
if(x==1)
{
printf("\n Number is prime neither composite");
}

if(flag==1)
{
printf("\n Number is prime");
}
else if(flag==0)
{
printf("\n Number is not prime");
}
}
