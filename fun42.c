//•	Calculate Sum of Natural Numbers
#include<stdio.h>
void main()
{
    int n,i ,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for ( i = n; i >= 1; i--)
    {
        sum = sum +i;
    }
    printf("Sum of natural number = %d",sum);
    
}