#include<stdio.h>
int fun();
int main()
{
int i,n;
printf("Enter the value :");
scanf("%d",&n);
int fun();
for(i=1;i<=n;i++)
{
printf("%d",(2*i-1));
if(i<n)
printf("+");
}
return 0;
}
