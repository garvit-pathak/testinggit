//do while	Find Number Is Armstrong Or Not
#include<stdio.h>
void main()
{
 int n ,temp=0 , rem , result=0;
 printf("Enter a number \n");

 scanf("%d",&n);
  temp = n ;
 do
 {
     rem = temp%10;
     result = result + rem * rem * rem;
     temp /= 10; 
 } while (temp!=0);
 if (n == result)
 {
     printf(" %d Number is ARMSTROMG ",n);
 }
 else
 {
     printf(" %d Number is not  ARMSTRONG ",n);
 }
 
 
}
