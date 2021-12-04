//•	The Greatest Number Among the Given Three Number
#include<stdio.h>
void great(int ,int ,int );
void main()
{
 int n1, n2 ,n3; 
 printf("Enter three numbers for checking greater between them\n");
 scanf("%d%d%d",&n1,&n2,&n3);
 great(n1 ,n2,n3);

}
void great(int n1 ,int n2 ,int n3)
{
    int x ;
    // x = n1 > n2 ? n1:n2;
    // (x>n3)? printf("%d is grreatest among three numbers ",x):printf("%d is greatest among three numbers ",n3);
    if (n1>n2&&n1>n3)
    {
        printf("%d is greatest among three numbers ",n1);
    }
    else if (n2>n3)
    {
         printf("%d is greatest among three numbers ",n2);
    }
    else
    {
         printf("%d is greatest among three numbers ",n3);
    }
    
}