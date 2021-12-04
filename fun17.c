//•	Character Is Vowel or Consonant
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
    if (ch == 'a'||ch == 'e'||ch =='i'||ch == 'o'||ch == 'u')
    {
        printf("%c is vowel ",ch);

    }
    else
    {
        printf("%c is consonent ",ch);
    }
    
}