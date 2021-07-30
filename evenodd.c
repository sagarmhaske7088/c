#include<stdio.h>
int main()
{
  int n;
  printf("Enter the num");
  scanf("%d",&n);
  
  if(n%2==0)
  printf("\nThe number is even %d",n);
  
  if(n%2!=0)
  printf("\nThe number is odd %d",n);
  return 0;
}