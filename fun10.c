//Factorial of a Given Number
#include<stdio.h>
void  fact(int);
int main()
{
    int n ;
     printf("Enter a number \n ");
     scanf("%d",&n);
     fact(n);
 return 0;
}
void  fact(int n)
{
    int i ,real = 1;
    for ( i = 1; i <= n; i++)
    {
        real = real * i;
        printf("hell");
    }
    printf("factorial of %d = %d",n,real);
}