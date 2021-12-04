//percentage of five subjects 
#include<stdio.h>
void perc(int []);
int main()
{
    int a[5];
    int e, m, h, s,sans;//e =english,m=maths,h=history,s=science,sans=sanskrit
    printf("Enter numbers of five subjects(maths,english,hsitory,science,sanskrit)\n ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    perc(a);
    return 0;
    

}
void perc(int a[])
{
    float percentage;
    int sum =0;
    for (int  i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    percentage = sum / 5.0f;
    printf("percentage : %f and total : %d ",percentage ,sum);

}