//do while loop	Display Fibonacci Series
#include<stdio.h>
void main()
{ int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 i=2;
 do
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
  ++i;
 }while(i<=number);
    
}