//•	Check whether a number is negative, positive or zero.
#include<stdio.h>
void sign(int);
void  main()
{
    int n ;
   printf("Enter a number \n");
   scanf("%d",&n);
   sign(n);
}
void sign(int n)
{

   
    if(n>0)
        printf("Number is positive\n");
    else if (n==0)
        printf("Number is Zero\n");
        else
        {
            printf("Number is negative\n");
        }
        
}
