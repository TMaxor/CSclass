/*=====================Program 0=====================*/
/*======================Katie W======================*/
/*==========Ellipse Circumferance Estimator==========*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(void)
{
    float major_axis, minor_axis;
    float estimation1, estimation2, estimation3, estimation4, estimation5, estimation6;
    float mathvariable;

    printf("Enter Major Axis: ");
    scanf("%f", &major_axis);
    printf("Enter Minor Axis: ");
    scanf("%f", &minor_axis);
    
    estimation1 = PI * ((3*(major_axis+minor_axis)) - sqrt((3*major_axis+minor_axis)*(major_axis+3*minor_axis)));
    printf("1)%.6f", estimation1); //Ramanujan's First Formula

    estimation2 = (PI*(major_axis+minor_axis))*(1+(3*(pow(major_axis-minor_axis, 2) / pow(major_axis+minor_axis, 2)))/(10+pow((4-(3*(pow(major_axis-minor_axis, 2) / pow(major_axis+minor_axis, 2)))), 0.5)));
    printf("\n2)%.6f", estimation2); //Ramanujan's Second Formula

    estimation3 = (2 * PI)*(pow((pow(major_axis, 1.5)/2)+(pow(minor_axis, 1.5)/2), 1/1.5));
    printf("\n3)%.6f", estimation3); //Muirs Formula

    mathvariable = pow(major_axis-minor_axis, 2)/pow(major_axis+minor_axis, 2);
    estimation4 = (PI/4)*(major_axis+minor_axis)*(3*(1+mathvariable/4)+1/(1-mathvariable/4));
    printf("\n4)%.6f", estimation4); //Hudson's Formula

    mathvariable = log(2)/log(PI/2);
    estimation5 = 4*(pow(pow(major_axis, mathvariable)+pow(minor_axis, mathvariable), 1/mathvariable));
    printf("\n5)%.6f", estimation5); //Holder Mean

    mathvariable = 0.825056;
    estimation6 = 4*(major_axis+minor_axis)-2*((4-PI)*major_axis*minor_axis)/(pow(((pow(major_axis, mathvariable)/2)+(pow(minor_axis, mathvariable)/2)), (1/mathvariable)));
    printf("\n6)%.6f", estimation6); //David Cantrell's Formula

    printf("\n\n\n");

    printf("Ellipse Circumference for Major Axis:%7.2f and Minor Axis:%7.2f", major_axis, minor_axis);
    printf("\n+-----------------------------------------------------+");
    printf("\n|     Ramanujan's First Approximation |%15.6f|", estimation1);
    printf("\n+-----------------------------------------------------+");
    printf("\n|    Ramanujan's Second Approximation |%15.6f|", estimation2);
    printf("\n+-----------------------------------------------------+");
    printf("\n|                      Muir's Formula |%15.6f|", estimation3);
    printf("\n+-----------------------------------------------------+");
    printf("\n|                      Hudson Formula |%15.6f|", estimation4);
    printf("\n+-----------------------------------------------------+");
    printf("\n|                         Holder mean |%15.6f|", estimation5);
    printf("\n+-----------------------------------------------------+");
    printf("\n|            David Cantrell's formula |%15.6f|", estimation6);
    printf("\n+-----------------------------------------------------+");

    return(0);
}