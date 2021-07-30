#include<stdio.h>


struct student
{
char name[10];
int id;
long int mob;
};

int main()
{
struct student s;
//s.name="sagar";
s.id=71703750;
s.mob=8180873043;


printf("\n%s",strcpy(s.name,"Sagar"));
printf("\nThe id is = %d",s.id);
printf("\nThe mob no is = %ld",s.mob);
} 
