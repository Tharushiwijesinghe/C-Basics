#include <stdio.h>
#define PI 3.14

void main()
{

    float A,P;
    int r;

    scanf("%d",&r);

    P=2*PI*r;
    A=PI*r*r;

    printf("Perimeter of the Circle = %f inches\n",P);
    printf("Area of the Circle = %f square inches",A);
}
