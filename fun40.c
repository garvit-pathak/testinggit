//•	Reverse A given Number
#include<stdio.h>
int main()
{
    int rev= 0 , n ,rem;
    printf("Enter a number \n");
    scanf("%d",&n);
    while (n!=0)
    {
      rem = n % 10 ;
      rev = rev *10 + rem;
      n/=10;
    }
    
    printf("Reversed number = %d ",rev);
    return 0;
}