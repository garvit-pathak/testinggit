//	Calculator
#include<stdio.h>
int main()
{
    float a , b, result;
    char c ;
    printf("enter any sign for calculations \n 1 . enter '+' for additio ...\n 2 . enter '-' for subbstraction....\n 3 . enter '*' for multiplication... \n 4 . enter '/' for division ...\n " );
    scanf("%c",&c);
    switch (c)
    {
    case '+':
        printf("enter two numbers for addition \n");
        scanf("%f%f",&a,&b);
        printf("addition = %f",a +b);
        break;
   case '-':
        printf("enter two numbers for substraction \n");
        scanf("%f%f",&a,&b);
        printf("substraction = %f",a - b);
        break; 
    case '*':
        printf("enter two numbers for multiplication \n");
        scanf("%f%f",&a,&b);
        printf("multiplication = %f",a * b);
        break;    
    case '/':
        printf("enter two numbers for division \n");
        scanf("%f%f",&a,&b);
        printf("division = %f",a / b);
        break;
    default: printf("you have enterd invalid sign ");    
        break;
    }
   
    return 0;
}