//•	Count the total number of notes in a given amount.
#include<stdio.h>
void notes(unsigned int );
void main()
{
    unsigned int amount;

    printf("Enter amount ...\n");
    scanf("%u",&amount);
    notes(amount);
}
void notes(unsigned int amount)
{
    int n2000=0,n500=0,n200=0,n100=0,n50=0,n20=0,n10=0,n5=0;
    
    if (amount >=5)
    {
     n2000 = amount /2000;
     amount = amount - (n2000*2000);
    n500 = amount /500;
    amount = amount - (n500*500);
    n200 = amount /200;
    amount = amount - (n200*200);
    n100 = amount /100;
    amount = amount - (n100*100);
    n50 = amount /50;
    amount = amount - (n50*50);
    n20 = amount /20;
    amount = amount - (n20*20);
    n10 = amount / 10;
    amount = amount - (n10*20);
    if (n2000)
    printf("in amount %d notes of 2000 \n ",n2000);
     if (n500)
    printf("in amount %d notes of 500 \n ",n500);
     if (n200)
    printf("in amount %d notes of 200 \n ",n200);
     if (n100)
    printf("in amount %d notes of 100 \n ",n100);
     if (n50)
    printf("in amount %d notes of 50 \n ",n50);
     if (n20)
    printf("in amount %d notes of 20 \n ",n20);
    if (n10)
    printf("in amount %d notes of 10 \n ",n10);
    }
    else 
    printf("paise kam hai .......\n");
}
    