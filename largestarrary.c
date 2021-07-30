#include <stdio.h>
int main()
{
  int n;
  double arr[10];
    printf("Enter the element of 1 to 10");
    scanf("%d",&n);
  
  for (int i=0;i<n;i++)
  {
    printf("Enter the no %d",i+1);
    scanf("%lf",&arr[i]);
  }
  for(int i=0;i<n;i++)
{
  if(arr[0]<arr[i])
  {
    arr[0] =arr[i];
  }
}
  printf("\n Largest element =%lf",arr[0]);
  return 0;
}