//.	Find Radius, Circumference and Volume of Cylinder
#include<stdio.h>
void main()
{
    int n;
    float dai , rad ,circum, vol,height;
    printf("Enter daimeter of cylinder\n");
    scanf("%f",&dai);
    rad = dai/2;
    printf("Enter height of cylinder\n");
    scanf("%f",&height);
    printf("Enter 1 for radius of cyclinder \n Enter 2 for circumference of circle \n Enter 3 for volume of cylinder \n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
          printf("Radius of cylinder = %f",rad);
        break;
    case 2:
        printf("circumference of cylinder = %f",2*3.14*rad*rad+2*3.14*rad*height);    
    case 3:
         printf("volume of cylinder = %f",3.14*rad*rad*height);

    default:
        break;
    }
}