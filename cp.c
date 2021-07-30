#include<stdio.h>
int main()
{
int cp,sp;
printf("Enter the cost and sellling price :");
scanf("%d%d",&cp,&sp);
if(cp>sp)
printf("\n The loss is occured :");
if(cp<sp)
printf("\n The profit is occured :");
if(cp==sp)
printf("\n You are the break-even point:");
return 0;
}
