#include<stdio.h>
int fact(int n);
int main()
{
int n,f;
printf("Enter any no:");
scanf("%d",&n);

f=fact(n);
printf("\n factorial of %d is %d",n,f);
}

int fact(int n)
{
int f;

if(n==0)
return 1;
else
{
f=n*fact(n-1);
}
}
