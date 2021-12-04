//•	Find GCD of two Numbers Using

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
    int min ;
    min = n1<n2 ?n1 :n2 ;
    do 
    {
        if (n1%min == 0 && n2%min == 0)         
        {
            break;
        }
        min--;
    }while( h>=1);
    printf("GCD = %d",h);
}