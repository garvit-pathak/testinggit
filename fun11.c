//	Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
void power(int);
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d",&n);
    power(n);
    return 0;
}
void power(int n)
{
     printf("first power %d^1 = %d\n",n,n*1);
     printf("Second power %d^2 = %d\n",n,n*2);
     printf("Third power %d^3 = %d\n",n,n*3);
    
    
}