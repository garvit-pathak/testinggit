//do while Count Number of Digits of an Integer
#include<stdio.h>
int main()
{
    int n ,i = 0;
    printf("Enter a number \n");
    scanf("%d",&n);
    do
    {
        n /= 10;
        i++;
    } while (n!=0);
    printf("number of digits %d",i);

}