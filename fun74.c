//.	Check whether a number is even or odd using a switch case.
#include<stdio.h>
void main()
{
   int a=0, n ;
   printf("Enter a number \n");
   scanf("%d",&n);
   switch (a)
   {
   case 0:
      if(n%2==0)
       printf("number is even");
       
      else
      {
        printf("number is odd");
      }
      
   default:
       break;
   }
}