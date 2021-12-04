//•	The Number Is Even or Odd
#include<stdio.h>
void num(int);
void main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
     num(n);
}
void num(int n)
{
    if (n%2==0)
    {
        printf("%d is even number \n",n);
    }
    else
    {
          printf("%d is odd number \n",n);
    }
    
    
}