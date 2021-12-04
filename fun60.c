//.do while Denomination of an Amount
#include <stdio.h>
#define SIZE 6

int main() 
{    
    int amount, notes;   

    // currency denominations
    int denominations[SIZE] = {500, 100, 50, 20, 10, 1};

    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("\n");
    int  i = 0;
    do 
    
    {
        notes = amount / denominations[i];

        if (notes)
        {
            amount = amount % denominations[i]; // remaining money

            printf("%d * %d = %d \n", notes, denominations[i], 
                notes * denominations[i]);
             i++;     
        }                
    }while( i < SIZE);

    return 0;
}