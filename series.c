#include<stdio.h>
int main()
{
int i,n;
printf("Enter the value :");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
if(i%2==0)
printf("%d+",-(2*i-1));
else
printf("%d",(2*i-1));

}
return 0;
}
