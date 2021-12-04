//•	Area of a Circle
#include<stdio.h>
//area of circle = pie * radaius *radius 
float area(float);
int main()
{
    float s,rad;
    printf("Enter radius of circle \n");
    scanf("%f",&rad);
    s = area(rad);
    printf("Area of circle = %0.3f ",s);
}
float area(float rad)
{
    float s ;
    s = 3.14 * rad*rad;
    return s;
}