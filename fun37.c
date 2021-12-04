//•	Check whether the triangle is an equilateral, isosceles or scalene triangle.

#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("enter first side length\n");
	scanf("%d",&side1);

	printf("enter second side length\n");
	scanf("%d",&side2);

	printf("enter third side length\n");
	scanf("%d",&side3);

	if(side1==side2&&side2==side3)
		printf("its equilateral triangle\n");

	else if(side1==side2||side1==side3||side2==side3)
		printf("its isoslece triangle\n");
	else
		printf("its scalane triangle\n");
	return 0;
}
