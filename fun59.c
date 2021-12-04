//do while	Print A Calendar Taking Input From User Using Loop
#include <stdio.h>
void main()
{
    
    int i, j, k, day, dt = 1;

    printf("C Program to Print a Calendar With Start With Input Day\n\n");

    printf("Enter Total Numbers of Days in a Month : ");
    scanf("%d", &day);

    printf("\n\nEnter First Day Start From <0-Mon....5-Sat & 6-Sun> End With Sunday : ");
    scanf("%d", &k);

    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
    printf(" _________________________________________________\n\n");
   
    j = k;

    do
    {
        if(j==0)
          break;
          
        printf("\t");
        j--;
    } while (j>0);
    
    
    do
    {
        if (k != 0)
        {
            if (k % 7 == 0)
                printf("\n");
        }

        printf("%d\t", dt);
        dt++;
        k++;
    }while (dt <= day);
}
