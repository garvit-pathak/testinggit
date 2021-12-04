//•	Check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
void num(int );
void main()
{
    int n ;
    printf("Enter a number \n");
    scanf("%d",&n);
    num(n);
}
void num(int n)
{
    if (n%5==0||n%11==0)
    {
        printf("number is divisible");
    }
    else
    {
        printf("number is not divisible");
    }
    
    
}