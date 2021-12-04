//AREA OF TRIANGLE
#include<stdio.h>
float tri(float,float);
void main()
{
    float base ,height ,area;
    printf("enter height and base of triangle \n");
    scanf("%f%f",&base,&height);
    area = tri(height,base);
    printf("area : %f",area);
}
float tri(float height , float base)
{ 
    float area;
    area = 0.2*base*height;
    return area;
}