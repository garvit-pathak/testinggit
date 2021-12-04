//The Display Size of the Different Data Type
#include<stdio.h>
void data(char);
int main()
{
 char ch;
printf("Enter I for checking size of integer \nEnter d for checking size of double \nEnter c for checking size of character \nEnter f for checking size of float \n");
scanf("%c",&ch);
data(ch);
}
void data(char ch)
{
    switch (ch)
    {
    case 'i':
        printf("size of integer = %lu",sizeof(int));
        break;
    case  'f':
        printf("size of float = %lu",sizeof(float));
        break;
    case 'c':
        printf("size of character =%lu",sizeof(char));
        break;
    case 'd':
        printf("size of double = %lu",sizeof(double));
        break;
    
    default:
        printf("You have enterd wrong choice");
        break;
    }
    
} 