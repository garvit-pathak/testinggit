//do while 	Find LCM of two Numbers
#include<stdio.h>
void main()
{
    int max, n1 , n2;
    printf("Enter two numbers \n");
    scanf("%d%d",&n1,&n2);
    max = (n1>n2)?n1:n2;
          
        do
        {
            if (max % n1 == 0 && max % n2 == 0) 
            {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
            }
            ++max;

        } while (1);
    

}