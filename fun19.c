//•	Uppercase, Lowercase, Special Character, or Digit
#include<stdio.h>
void charac(char);
void main()
{
    char ch ;
    printf("Enter a character \n");
    scanf("%c",&ch);
    charac(ch);
}
void charac(char ch)
{
    if (ch >= 'a'&&ch <='z')
    {
        printf("%c is lowercase character ",ch);
    
    }
    else if(ch >= 'A' && ch <='Z')
    {
        printf("%c is upercase character ",ch);
    
    }
    else if (ch >=0 && ch<=9)
    {
        printf("%c is a digit ",ch);
    }
    else
    {
        printf("%c is special character ",ch);
    }
    
}