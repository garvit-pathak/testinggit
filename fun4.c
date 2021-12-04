//convert a Person’s Name in Abbreviated
#include<stdio.h>
void shor(char [] , char []);
int main()
{
    char first[20] ,last[20] ;
    printf("Enter your first name \n");
    scanf("%s",first);
    printf("Enter your last name \n");
    scanf("%s",last);
    shor(first,last);
}
void shor(char first[20] ,char last[20])
{
  printf("abbreviated name : %c. %s",first[0],last);
}