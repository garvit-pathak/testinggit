//do while reverse a number 
#include<stdio.h>
void reverse(int );
void main()
{
    int n ;
    printf("Enter a number \n");
    scanf("%d",&n);
    reverse(n);

}
void reverse(int n)
{
 int rem ,rev=0;
 do
 {
   rem = n%10;
   rev = rev*10+ rem;
   n /= 10;
 } while (n!=0);
 printf("reverse number = %d",rev);
}