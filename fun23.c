//•	Leap Year
#include<stdio.h>
void leap(int);
void main()
{
    int year ;
    printf("Enter a year \n");
    scanf("%d",&year);
    leap(year);
}
void leap(int year )
{
    if (year%4==0)
    {
        printf("%d year is leap year \n",year);
    }
    else
    {
        printf("%d year is not leap year \n",year);
    }
    
}
