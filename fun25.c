//•	Voting Eligibility Checker
#include<stdio.h>
void age(int);
void main()
{
    int n ;
    printf("enter your age \n");
    scanf("%d",&n);
    age(n);
}
void age(int n )
{
    if (n>=18)
    {
        printf("you are aligible for voting bruh...");
    }
    else
    {
        printf("you are not aligible for voting bruhh you are chotu....");
    }
    
    
}