//program for changing tempratures celcius to farhenhite or farhenhite to celcius 
#include<stdio.h>
void temp(char);
int main()
{
    char ch ;
    
    printf("enter 'f'or 'F' for changing  farhenhite to calcius \nand  enter 'c' or 'C' for changing celcius to farhenhite \n  ");
    scanf("%c",&ch);
    temp(ch);
    return 0;

}
void temp(char ch)
{
    float celcius , farhenhite ;
    if (ch =='f'|| ch =='F')
    {
        printf("Enter temprature in farhenhite \n");
        scanf("%f",&farhenhite);
        celcius = (farhenhite - 32)*5/9.0f;
        printf("%f farhenhite to %f celcius\n",farhenhite,celcius);
    }
    if (ch == 'c'|| ch == 'C')
    {
        printf("Enter temprature in celcius \n");
        scanf("%f",&celcius);
        farhenhite = (9/5.0f*celcius )+32;
        printf("%f celcius = %f farhenhite\n",celcius ,farhenhite);
    }

}