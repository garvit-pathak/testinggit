//•	Print Multiplication Table Using
#include<stdio.h>
void main()
{
    int n , i ;
    printf("Enter number of which you want multiplication table \n ");
    scanf("%d",&n);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n , i ,n*i);
    }
    
}