//ASCII valuae of any character 
#include<stdio.h>
void ASCII(char);
int main()
{
    char ch;
    printf("Enter any character \n");
    scanf("%c",&ch);
    ASCII(ch);

}
void ASCII(char ch)
{
    printf("ASCII value = %d",ch);
}
