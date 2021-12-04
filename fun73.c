//.	Find the maximum between two numbers using the switch case.
#include<stdio.h>
void main()
{
    int  n ,n1,a=0;
    printf("Enter two numbers \n");
    scanf("%d%d",&n,&n1);
   
    switch (a)
    {
    case 0:
         if (n>n1)
         {
             printf("%d is greater \n",n);
         }
         else
         {
             printf("%d is greater ",n1);
         }
         
        break;
    
    default:
        break;
    }
}