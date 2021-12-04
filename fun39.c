//•	Calculate profit or loss.
#include<stdio.h>
int main()
{
    float cost ,selling ,profit,loss;
    printf("enter cost price\n");
    scanf("%f",&cost);
    printf("enter selling price\n");
    scanf("%f",&selling);
    profit = selling - cost ;
    printf("profit = %f\n",profit);
    loss = cost - selling;
    printf("loss = %f\n",loss);
    return 0;

}