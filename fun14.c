//•	GCD of Two Numbers
#include<stdio.h>
void gcd(int ,int );
int main()
{
    int n1 ,n2 ;
    printf("Enter two numbers for checking gcd ");
    scanf("%d%d",&n1,&n2);
     gcd(n1,n2);
    return 0;
}
void gcd(int n1 , int n2)
{
    int h ;
    for ( h = n1<n2 ?n1 :n2 ; h>=1; h--)
    {
        if (n1%h == 0 && n2%h == 0)         
        {
            break;
        }
        
    }
    printf("GCD = %d",h);
}