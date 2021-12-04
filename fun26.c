//maximum of Two Numbers
#include<stdio.h>
void num(int , int );
void main()
{
    int n1 , n2 ;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1 ,&n2);
    num(n1 , n2 );
}
void num(int n1 , int n2 )
{
    (n1>n2)? printf("%d is maximum ",n1):printf("%d is minimum ",n2); 
}