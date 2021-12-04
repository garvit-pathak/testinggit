//	Count Number of Digits of an Integer
#include<stdio.h>
void main()
{
    int n,i=0;
    printf("Enter an number \n");
    scanf("%d",&n);
      do
      {
          n /= 10;
          i ++;
      } while (n!=0);
      printf("number of digits = %d",i);
    
}