//•	The Date Is Correct or Not
#include<stdio.h>
void date(int);
void main()
{
    int n ;
    printf("Enter date of month\n");
    scanf("%d",&n);
     date(n);
}
void date(int n)
{
    if(n>=1&&n<=31)
    printf("%d is correct date of month ",n);
    else
    {
        printf("%d is inncorrect date of month ",n);
    }
    
}