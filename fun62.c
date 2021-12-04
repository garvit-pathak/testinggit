//•	Sort A Float Array In Ascending And Descending Order Using
#include<stdio.h>
void main()
{
 int i ,n ,j,temp=0;
 float a[100];
 printf("Enter how many elements you want in float array\n");
 scanf("%d",&n);
 printf("Enter elements for float array \n");
 for ( i = 0; i <n; i++)
 {
     scanf("%f",&a[i]);
 }
 printf("Shorting elements of array");
 for ( i = 0; i <n ; i++)
 {
     for ( j = i+1; j < n; j++)
     {
         if (a[i]>a[j])
         {
             temp = a[i];
             a[i] = a[j];
             a[j] = temp ;
         }
         
     }
     
 }
 for ( i = 0; i < n; i++)
 {
     printf("\n%f",a[i]);
 }
 
}