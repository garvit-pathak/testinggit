//.	Check whether an alphabet is a vowel or consonant using a switch case.
#include<stdio.h>
void main()
{
    char ch ;
    printf("Enter a alphabet \n");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
      printf("vowel ");
      break;
    case 'e':
      printf("vowel");
      break;
    case 'i':
    printf("vowel ");
    break ;
    case 'o':
    printf("vowel");
    break;
    case 'u':
    printf("vowel");  
    break;
    default:
        printf("consonent");
        break;
    }
}