/*=======================================================*/
/*===================Lab Assignment 2L===================*/
/*======================By: Katie W======================*/
/*=======================================================*/
#include <stdio.h>
#include <math.h>

#define PI 3.1415
/*=======================================================*/
int main(void)
{
    float side = 0;
    float radius = 0;
    float height = 0;
    float square_area;
    float circle;
    float cube;
    float sphere;
    float cylinder;
    float cone;
    
    /* Input the value of a side */
    printf("Enter value for Side, Radius and Height> ");
    scanf("\n%f%f%f", &side, &radius, &height);

	printf("You entered: \nSide   = %4.2f\n", side);
    printf("Radius = %4.2f\n", radius);
    printf("Height = %4.2f\n\n", height);

	// Compute and print the area of a square
    printf("Area of Square     : %.2lf\n", pow(side, 2));
    printf("Area of Circle     : %.2lf\n", pow(radius, 2)*PI);
    printf("Surface of Cube    : %.2lf\n", pow(side, 2)*6);
    printf("Surface of Sphere  : %.2lf\n", pow(radius, 2)*PI*4);
    printf("Surface of Cylinder: %.2lf\n", pow(0, 0)-1+2*PI*radius*height);
    printf("Surface of Cone    : %.2lf\n\n", pow(0, 0)-1+PI*radius*side);

    printf("Volume of Cube     : %.3lf\n", pow(side, 3));
    printf("Volume of Sphere   : %.3lf\n", pow(radius, 3)*PI*4/3); /*err*/
    printf("Volume of Cylinder : %.3lf\n", pow(radius, 2)*PI*height);
    printf("Volume of Cone     : %.3lf\n", pow(radius, 2)*PI*height/3);

    printf("Goodbye\n");
    return 0;
}

