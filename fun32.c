//•	A Character Is an Alphabet or Not
#include<stdio.h>
void alpha(char );
void  main()
{
  char ch ;
  printf("Enter any character \n");
  scanf("%c",&ch);
  alpha(ch);
}
void alpha(char ch)
{
    if ((ch>='a' || ch>='A') && (ch <='z' || ch<='Z'))
    {
        printf(" %c charcter is alphabet ",ch);
    
    }
    else
    {
        printf("%c character is not alphabet ",ch);
    }
    
    
}