//•	LCM of Two Numbers
#include<stdio.h>
void lcm(int ,int);
int main()
{
 int n1 ,n2;
 printf("Enter two numbers for  getting their lcm \n");
 scanf("%d%d",&n1,&n2);
 lcm(n1,n2);
 return 0 ;
}
void lcm(int n1,int n2)
{
    int max ;
   max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }

}