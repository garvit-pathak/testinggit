//•do while	Calculate Sum of Natural Numbers
#include<stdio.h>
void main()
{
    int n,i= 1 ,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);

    do
    {
        sum = sum + i;
        i++;
    } while (i<=n);
    
    printf("Sum of natural number = %d",sum);
    
}