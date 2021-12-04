//•	Input month number and print number of days in that month.
#include<stdio.h>
void mon(int);
void main()
{
    int n ;
    printf("Enter month number \n");
    scanf("%d",&n);
    mon(n);
}
void mon(int n)
{
    switch (n)
    {
    case 1:
        printf("in JANUARY 31 days\n ");
         break;
    case 2:
        printf("in FEBURARY 28 days\n ");
         break;
    case 3:
        printf("in MARCH 31 days\n ");
         break;
    case 4:
        printf("in APRIL 30 days\n ");
         break;
    case 5:
        printf("in MAY 31 days\n ");
         break;
    case 6:
        printf("in JUNE 30 days\n ");
         break;
    case 7:
        printf("in JULY 30 days\n ");
         break;
    case 8:
        printf("in AUG 31 days\n ");
         break;
     case 9:
        printf("in SEP 30 days\n ");
         break;
    case 10:
        printf("in OCT 31 days\n ");
         break;
    case 11:
        printf("in NOV 30 days\n ");
         break;
    case 12:
        printf("in DECEMBER 31 days\n ");
         break;

                               
    
    default:
      printf("invalid");
        break;
    }
}