#include<stdio.h>
int main()
{
int i,n;
printf("Enter the value :");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("%d",(2*i));
if(i<n)
printf("+");
}
return 0;
}
