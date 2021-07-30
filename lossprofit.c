#include<stdio.h>
int main()
{
    int sp,cp,profit,loss;
    printf("Enter the cost price and seeling price :");
    scanf("%d%d",&cp,&sp);
    profit=(cp-sp);
    loss=(sp-cp);
    if(cp<sp)
    printf("you are profit %d",profit);
    //else
    printf("you are loss %d",loss);
    return 0;
    
}