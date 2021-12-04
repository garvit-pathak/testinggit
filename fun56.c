//do while.	Check Whether a Number is A Palindrome or Not
#include<stdio.h.>
void main()
{
    int n , rem , temp , rev = 0 ;
    printf("Enter a number \n");
    scanf("%d",&n);
    temp = n;
    do
    {
        rem = temp %10 ;
        rev = rev *10 + rem;
        temp /= 10;
    } while (temp!=0);
    if (n == rev )
    {
        printf("%d is palindrome ",n);
    }
    else
    {
        printf("%d is  not palindrome ",n);
    }
    
    
    
}