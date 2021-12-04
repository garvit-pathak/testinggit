 /* Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include<stdio.h>
void gross(float ,float ,unsigned );
void main()
{
    unsigned bs;
    float hra,da;

    printf("Enter basic sallery of an employee : ");
    scanf("%u",&bs);

    if(bs <= 10000)
    {
        hra = (bs * 20) / 100.0f;
        da = (bs * 80) / 100.0f;
        gross(bs,hra,da);
    }
    else if(bs >= 10000 && bs <= 20000)
    {
        hra = (bs * 25) / 100.0f;
        da = (bs * 90) / 100.0f;
        gross(bs,hra,da);
    }
    else
    {
        hra = (bs * 30) / 100.0f;
        da = (bs * 95) / 100.0f;
        gross(bs,hra,da);
    }

    
}
void gross(float hra,float da,unsigned bs)
{
    float gs;
    gs = bs + hra + da;
    printf("HRA : %.2f\n",hra);
    printf("DA : %.2f\n",da);
    printf("Gross Salery : %.2f\n",gs);

}