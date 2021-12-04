//calculating simple interest 
#include<stdio.h>
void simple(float ,float ,float);
 int main()
{
    float P ,r,T ;
    printf("Enter principle value , rate , time for simple intrest \n");
    scanf("%f%f%f",&P,&r,&T);
    //simple = P*r*T/100.0f;
    //printf("simple intrest = %f",simple);
    simple(P,r,T);
    return 0;

}
void simple(float princi,float rate,float time )
{
    float intrest;
    intrest = princi*rate*time;
    printf("simple intrest = %f",intrest);
}
