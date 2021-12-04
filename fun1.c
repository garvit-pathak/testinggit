//circumference of circle 
#include<stdio.h>
float circ(float);
int main()
{
    float area ,radius , circumference ;
    printf("Enter radius of circle \n ");
    scanf("%f",&radius );
    circumference = circ(radius);
    printf("circumference = %f",circumference);

}
float circ(float radius)
{

    radius = 2*3.14*radius ;
    return radius;
}