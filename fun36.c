//•	Input angles of a triangle and check whether the triangle is valid or not.
#include<stdio.h>
void main(){
    float a,b,c;
    printf("Enter three angles of triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b+c) == 180)
     printf("Triangle is valid");
    else
     printf("Triangle is not valid");
}