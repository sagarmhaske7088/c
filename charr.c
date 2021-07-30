#include<stdio.h>
int main()
{
int i,j;
char ch=65;

for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++,ch++)
printf("%c ",ch);

printf("\n\n");
}
return 0;
}

