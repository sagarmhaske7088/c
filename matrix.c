#include<stdio.h>
int main()
{
int r,c,i,j,a[2][2],b[2][2],sum[2][2];

printf("Enter number of Row and Column of matrix :");
scanf("%d%d",&r,&c);

printf("Enter the matrix of a :");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d"&a[i][j]);

printf("Enter the matrix of b :");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d"&b[i][j]);

printf("Enter the sum of matrix :");
for(i=0;i<r;i++)
for(j=0;j<c;j++)

sum[i][j]=a[i][j] + b[i][j];
printf("%d",sum[i][j]);

return 0;
}



