#include<stdio.h>
void prime();
void fino();
void large3();


int main()
{
int c;
printf("Enter you choise");
scanf("%d",&c);
switch(c)
{
case 1:
prime();
break;

case 2:
fino();
break;

case 3:
large3();
break;


}

}



void prime()
{
int c;
printf("enter the number");
scanf("%d",&c);
if(c==1)
printf("this is the prime no");
else
printf("this is not an prime no");
}

void fino()
{
int c;
printf("enter the number");
scanf("%d",&c);
if(c>1)
printf("this is the fino no");
else
printf("this is not the fino no");
}

void large3()
{
int c;
printf("enter the number");
scanf("%d",&c);
if(c<1)
printf("this is the large3 no");
else
printf("this is not the large3 no");

}
