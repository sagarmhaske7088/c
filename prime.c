#include<stdio.h>
int main()
{
int i,num;
printf("\nEnter any number");
scanf("%d",&num);
//for(i=2;i<num;i++)

i=2;
while(i<num)
{
 if(num%i==0)
 {
 printf("%d is a prime ",num);
 break;
}
i++;

}

if(num==i)
printf("\n%d is  not prime number",num);

return 0;

}
