#include<stdio.h>
int main()

{

float m1,m2,m3,m4,m5,per;
printf("\n Enter the marks of 5 sub :");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

per=(m1+m2+m3+m4+m5)/5;

if(per >=70)
printf("\nGrade A");

else if(per>60 && per<=70)
printf("\nGrade B");

else if(per>45 && per<=60)
printf("\nGrade B");

else if(per>35 && per<=45)
printf("\nGrade C");

else 
{
printf("\n fail");
}
}
