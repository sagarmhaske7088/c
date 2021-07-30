#include<stdio.h>

void swap(int,int);
int main()
{
int a=10,b=20;
printf("\n Enter before swap value a=%d b=%d",a,b);
swap(a,b);
printf("\n Enter After swap value a=%d b=%d",a,b);
}
void swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;

}
