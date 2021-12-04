//•	Find Number Is Armstrong Or Not
#include<stdio.h>
void main()
{
 int n , temp , rem ,result = 0;
 printf("Enter a number \n");
 scanf("%d",&n);
 temp = n ;
 while (temp != 0)
 {
    rem = temp % 10;
    result = result + rem * rem * rem;
    temp /= 10;
 }
 if(result == n)
 {
    printf("Number is armstrong ");
 }
 else
 {
     printf("Number is not armstrong ");
 }
 
    
}