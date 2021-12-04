//•	Input week number and print weekday.
#include<stdio.h>
void day(int );
void main()
{
    int n ;
    printf("Enter a number \n");
    scanf("%d",&n);
    day(n);
}
void day(int n)
{
    switch (n)
    {
    case 1:
        printf("MONDAY");
        break;
   case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNSDAY");
        break;
    case 4:
        printf("THRUSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    
    default:
      printf("invalid number ");
        break;
    }
}