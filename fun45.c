//.	Check Whether a Number is A Palindrome or Not
#include<stdio.h>
int main()
{
    int rev= 0 ,temp, n ,rem;
    printf("Enter a number \n");
    scanf("%d",&n);
    temp = n ;
    while (n!=0)
    {
      rem = n % 10 ;
      rev = rev *10 + rem;
      n/=10;
    }
    if (temp == rev)
    {
        printf("%d number is palindrome",temp);
    }
    else
    {
        printf("%d number is not palindrome",temp);
    }
     
}