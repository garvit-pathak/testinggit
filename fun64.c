//	switch  Temperature Conversion Celsius To Fahrenheit And Vice Versa
#include<stdio.h>
int main()
{
    char ch ;
    float celcius , farhenhite ;
    printf("enter 'f'or 'F' for changing  farhenhite to calcius \nand  enter 'c' or 'C' for changing celcius to farhenhite \n  ");
    scanf("%c",&ch);
    switch(ch)
    {
     case 'f': 
        {
         printf("Enter temprature in farhenhite \n");
         scanf("%f",&farhenhite);
         celcius = (farhenhite - 32)*5/9.0f;
         printf("%f farhenhite to %f celcius\n",farhenhite,celcius);
        }
        break ;
     case 'F':
       {
         printf("Enter temprature in farhenhite \n");
         scanf("%f",&farhenhite);
         celcius = (farhenhite - 32)*5/9.0f;
         printf("%f farhenhite to %f celcius\n",farhenhite,celcius);
        }
        break ;
     case 'c':
        {
         printf("Enter temprature in celcius \n");
         scanf("%f",&celcius);
         farhenhite = (9/5.0f*celcius )+32;
         printf("%f celcius = %f farhenhite\n",celcius ,farhenhite);
       }
       break;
     case 'C':
        {
         printf("Enter temprature in celcius \n");
         scanf("%f",&celcius);
         farhenhite = (9/5.0f*celcius )+32;
         printf("%f celcius = %f farhenhite\n",celcius ,farhenhite);
       }   
     break ;
     default:
        printf("Invalid");
    } 
    return 0;

}