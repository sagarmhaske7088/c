#include<stdio.h>
int main()

{
int a,b,t;
printf("Enter the value :");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("\n vaule of t is:%d",t);
return 0;


}
